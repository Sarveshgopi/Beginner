#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv)
{
    string input,temp1,temp2;
    std::cin>>input;
    int iterator1,iterator2,palindromic_count=0;
    for(iterator1=0;iterator1<input.length()-1;iterator1++)
    {
       for(iterator2=iterator1+2;iterator2<input.length()+1;iterator2++)
       {
           temp1=input.substr(i,j);
           temp2=temp1;
           reverse(temp1.begin(),temp1.end());
           if(temp1.compare(temp2)==0)
           {
               palindromic_count++;
            }
         }
       }
       std::cout<<c;
