/*           
                               The number of spaces plus 1 gives us the total number of words in a space separated string
                               c <- 0
                               for i <- 0 to (length of a)-1 do
                                    if a[i] <- 32 then 
                                        c+=1
                                write c+1                                                                                                 
                                                                   */

#include<stdio.h>
#include<stdlib.h>
// START OF THE SCRIPT  //

int main()
{
   int testcases;
   printf("ENTER THE NUMBER OF TESTCASES:");
   scanf("%d",&testcases);
   for(int iterator=0;iterator<t;iterator++)
   {
       char inputstring[1000];
       printf("ENTER THE STRING");
       fgets(inputstring,1000,stdin);         // READ THE INPUT STRING
       int index=0,count=0;
       while(inputstring[index]!='\0')
       {
          if(inputstring[index]==32)
          {
             count++;
          }
             index++;
        }
        printf("THE NUMBER OF WORDS IN THE STRING IS: %d",count+1);
    }
          return 0;
         
         /* ### END OF THE SCRIPT ### */
}
   
