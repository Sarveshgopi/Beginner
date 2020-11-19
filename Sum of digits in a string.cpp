#include<bits/stdc++.h>
using namespace std;
int main()
{
    String a;
    std::cin>>a;
    int i,count=0;
    for(i=0;i<a.size();i++)
    {
       if(isdigit(a[i]))
       {
           count+=(a[i]-48);
       }
    }
    std::cout<<count;
    return 0;
 }
