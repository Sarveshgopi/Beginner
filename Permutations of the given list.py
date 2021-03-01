from itertools import permutations as p
a=list(map(int,input().split()))
d=list(set(p(a,len(a))))
for i in d:
    k=list(i)
    print(*k,ene=' ')
