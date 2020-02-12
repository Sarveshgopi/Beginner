#include<stdio.h>
#include<stdin.h>
int main()
{
    int t,i;
    char a[1000];
    printf("Enter the number of testcases:");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Enter the string:");
        scanf("%s",&a);
        while(a[i]!='\0')
        {
             
            if(a[i]=='b')
            {
              printf("");
              i++;
              }
              else if(a[i]=='a' && a[i+1]=='c')
              {
                printf("");
                i=i+2;
                }
                else
                {
                   printf("%c",a[i]);
                   i++;
                   }
                   }
                   printf("\n");
                   }
                   return 0;
                   }
