/* 
                            ALGORITHM TO PRINT THE FOLLOWING PATTERN,
                                       
                                 If the input is 5, the output would be
                                             1 2 3 4 5
                                             2 4 6 8 10
                                             3 6 9 12 15
                                             4 8 12 16 20
                                             5 10 15 20 25
                                             
                                  THE ALGORITHM IS,
                                           for i <- 1 to 5 do
                                               for j <- 1 to 5 do
                                                   write i*j
                                               write newline("\n")
                                                                                    */
                                             
                                             
#include<stdio.h>
#include<stdlib.h>
// START OF THE SCRIPT 

int main()
{
  int testcases,iterator1,iterator2,testno;
  printf("ENTER THE NUMBER OF TESTCASES:");
  scanf("%d",&testcases);
  for(testno=0;testno<testcases;testno++)
  {
     int inputno;
     printf("ENTER THE NUMBER:");
     scanf("%d",&inputno);             // READING THE INPUT
     for(iterator1=1;iterator1<=inputno;iterator1++)
     {
       for(iterator2=1;iterator2<=inputno;iterator2++)
       {
          printf("%d ",(int)iterator1*iterator2);          //PROCESS
       }
          printf("\n");
     }
  }
        return 0;
    /* ### END OF THE SCRIPT ### */
    
}
