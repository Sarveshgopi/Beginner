#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,f=0;
    std::cin>>a>>b;
    for(i=b;i>a;i++)
    {
        f*=i;
    }
    std::cout<<f;
    return 0;
}
