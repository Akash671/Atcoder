s=str(input())
S=s[::-1]
#print(S)
ss=""
for i in range(len(s)):
   if S[i]=='6':
      ss+='9'
   elif S[i]=='9':
     ss+='6'
   else:
      ss+=S[i]
print(ss)      
