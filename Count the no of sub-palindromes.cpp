/*
               ### TO CHECK THE WHETHER THE SUB-STRING CONSIDERED IS PALINDROMIC OR NOT ###
               for i -> 0 to length of the input string do
                   for j -> i+2 to length of the input string do
                        temp1 -> input string from index i to j
                        temp2 -> reverse of temp1 string
                   if temp1 == temp2 then
                       count of sub-palindrome is incremented by value 1
                                                                                           */

#include <bits/stdc++.h>
using namespace std;
//start of the script....
int main() {
    string input,temp1,temp2;            //initializing variables of different datatypes.....
    std::cin>>input;
    int iterator1,iterator2,palindromic_count=0;
    for(iterator1=0;iterator1<input.length()-1;iterator1++)
    {
       for(iterator2=iterator1+2;iterator2<input.length()+1;iterator2++)
       {
           temp1=input.substr(iterator1,iterator2);  
           temp2=temp1;
           reverse(temp1.begin(),temp1.end());
           if(temp1.compare(temp2)==0)
           {
               palindromic_count++;
            }
         }
       }
       std::cout<<palindromic_count;  //printing the no. of sub-palindromes the in input string
	return 0;
    /* ### END OF THE SCRIPT ### */
}
