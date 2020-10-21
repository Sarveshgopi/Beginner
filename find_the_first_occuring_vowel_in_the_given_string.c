#include<stdio.h>
#include<string.h>
#include<stdio.h>
int main()
{
   int t,k;
   char a[1000],c;
   printf("ENTER THE NUMBER OF TESTCASES:");
   scanf("%d",&t);
   for(k=0;k<t;k++)
   {
      printf("ENTER THE STRING:");
      scanf("%s",&a);
      int i=0,count=0,h=strlen(a);
      while(a[i]!='\0')
      {
         c=tolower(a[i]);
         if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
         {
            printf("%c",a[i]);
            break;
           }
           i++;
           count++;
           }
           if(count==h)
             {
                printf("-1");
                }
               }
               return 0;
              }
            
