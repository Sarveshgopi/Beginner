#include<stdio.h>
#include<stdlib.h>
int main()
{   
    long int first,second,third;
    scanf("%ld\n%ld\n%ld",&first,&second,&third);
    if(first==second && second==third)
    {
      printf("equilateral");
    }
   else if(first!=second && second!=third && third!=first)
   {
       printf("scalene");
   }
  else
  {
     printf("isosceles");
   }
   return 0;
}
