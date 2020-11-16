#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=0,c=0;
    while(n!=0)
    { 
        p+=(n%10);
        c++;
        n/=10;
    }
    printf("%*d",c,p);
   return 0;
 }
