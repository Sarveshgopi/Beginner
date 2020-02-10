#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[1000],i,j,k,temp,t,n;
   printf("ENTER THE NUMBER OF TESTCASES:");
   scanf("%d",&t);
   for(k=0;k<t;k++)
   {
      printf("ENTER THE ARRAY SIZE:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
         printf("ENTER THE ELEMENT:");
         scanf("%d",&a[i]);
         }
         for(i=0;i<n;i++)
         {
            for(j=i+1;j<n;i++)
            {
               if(a[i]>a[j])
               {
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                   }
                  }
                 }
                 printf("THE SORTED LIST IS "):
                 for(i=0;i<n;i++)
                 {
                   printf("%d",a[i]);
                   }
                 }
                return 0;
              }
