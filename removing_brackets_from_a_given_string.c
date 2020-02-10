#include<stdio.h>
#include<stdin.h>
int main()
{
   char a[1000];
   scanf("%s",a);
   int i=0;
   while(a[i]!='\0')
   {
      if(a[i]!='[' && a[i]!=']' && a[i]!='{' && a[i]!='}' && a[i]!='(' && a[i]!=')')
      {
         printf("%c",a[i]);
         }
         i++;
       }
         return 0;
         }
         
