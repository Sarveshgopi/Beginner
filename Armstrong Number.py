''' START OF THE SCRIPT  '''

inputnumber=int(input())    #READING THE INPUT
temp=inputnumber
temp1=0
'''          THE ALGORITHM OF FINDING AN ARMSTRONG NUMBER 
  A number is said to be a armstrong number, if the sum of the cube of the digits is equal to that number.
 
     arm=0
     temp=number
     while number!=0 do
           arm+=(number%10)**3
           number//=10
     if arm==temp then
         write "ARMSTRONG NUMBER"
     else
         write "NOT AN ARMSTRONG NUMBER"
                                             '''
while temp!=0:
   integer=(temp%10)**3
   temp1+=integer
   temp//=10
if temp1==inputnumber:
   print('It is an Armstrong number')
else:
   print('It is Not an Armstrong number')
   
'''  ### END OF THE SCRIPT ###  '''
