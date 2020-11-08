m=int(input())
n=int(input())
for i in range(m):
    a.append(list(map(int,input().split())))
for i in range(n):
    for j in range(m):
        print(a[j][i],end=' ')
    print('\r')
