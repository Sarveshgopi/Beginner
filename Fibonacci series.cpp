#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t1=0,t2=1,nextTerm;
    std::cin>>n;
    for (i=1;i<=n;i++) 
    {
        std::cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
    }
