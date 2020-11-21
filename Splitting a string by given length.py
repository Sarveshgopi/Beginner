a=input().strip()
k=int(input())
for i in range(0,len(a)-k+1):
    print(a[i:(i+k)])
