#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t,n,i,j,k;
  printf("ENTER THE NUMBER OF TESTCASES:");
  scanf("%d",&t);
  for(k=0;k<t;k++)
  {
     printf("ENTER THE NUMBER:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       for(j=1;j<=n;j++)
       {
          printf("%d",(int)i*j);
          }
          printf("\n");
        }
        return 0;
        }
}