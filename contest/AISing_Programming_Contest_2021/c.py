n=int(input())
a=list(map(int,input().split()[:n]))
b=list(map(int,input().split()[:n]))
c=list(map(int,input().split()[:n]))
cc=0
for i in range(n):
   for j in range(n):
     if c[j]<n and a[i]==b[c[j]]:
        cc+=1
print(cc)
