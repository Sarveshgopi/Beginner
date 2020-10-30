inputnumber=int(input())
temp=inputnumber
while temp!=0:
   integer=(temp%10)**3
   temp1+=integer
   temp//=10
if temp1==inputnumber:
   print('It is an Armstrong number')
else:
   print('It is Not an Armstrong number')
