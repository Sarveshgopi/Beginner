m=int(input())
n=int(input())
a=[]
for i in range(m):
    a.append(list(map(int,input().split())))
for i in range(m):
    for j in range(n):
         print(a[i][j],end=" ")
    print()
