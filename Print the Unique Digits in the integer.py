inputnumber=int(input())
temp=[]
inputnumber=str(inputnumber)
for digit in inputnumber:
    if digit not in temp:
       print(digit,end='')
       temp.append(digit)
