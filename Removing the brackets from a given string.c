#include<stdio.h>
#include<stdlib.h>
int main()
{
   //Start of the script.....
   char input_string[1000];
   scanf("%s",input_string);
   int index=0;
   /*
        ### LOGIC OF THE PROGRAM ###
        index -> 0
        while a[index]!='\0' do 
              if a[index] not equals open or close brackets(parantheses,square and curly types) then
                  write a[index]
              increment the index by value 1
   */
   while(input_string[index]!='\0')
   {
      if(input_string[index]!='[' && input_string[index]!=']' && input_string[index]!='{' && input_string[index]!='}' && input_string[index]!='(' && input_string[index]!=')')
      {
         printf("%c",input_string[index]);
      }
         index++;
   }
         return 0;
          // ### END OF THE SCRIPT ### //
  }
         
