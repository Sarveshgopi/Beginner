#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int m,n,i,j,p,q;
    scanf("%ld %ld\n%ld %ld",&m,&n,&p,&q);
    long int a[m][n],b[p][q];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%ld ",&a[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%ld ",&b[i][j]);
        }
    }
    
    return 0;
    }
