#include<stdio.h>
#include<stdlib.h>
int main()
{
   char inputstring[1000];
   int testcases;
   printf("ENTER THE NUMBER OF TESTCASES:");
   scanf("%d",&testcases);
   for(int k=0;k<t;k++)
   {
       printf("ENTER THE STRING");
       fgets(a,1000,stdin);
       int i=0,count=0;
       while(a[i]!='\0')
       {
          if(a[i]==32)
          {
             count++;
             }
             i++;
           }
           printf("THE NUMBER OF WORDS IN THE STRING IS: %d",count+1);
          }
          return 0;
          }
   
