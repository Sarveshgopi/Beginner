#include<stdio.h>
#include<stdlib.h>
int main()
{
  char a[7];
  printf("ENTER THE NUMBER OF TESTCASES:");
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
      printf("ENTER THE 6 CHARACTER STRING");
      scanf("%s",&a);
      if(a[1]=='0' && a[4]=='0')
         printf("Season %d, Episode %d",a[2],a[5]);
      else if(a[1]!='0' && a[4]=='0')
         printf("Season %d%d, Episode %d",a[1],a[2],a[5]);
       else if(a[1]=='0' && a[4]!='0')
          printf("Season %d, Episode %d%d",a[2],a[4],a[5]);
        else
          printf("Season %d%d, Episode %d%d",a[1],a[2],a[4],a[5]);
      }
      return 0;
      }
