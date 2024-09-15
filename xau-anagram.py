n=int(input())
a=[]
for i in range(n):
  s=str(input())
  a.append(s)
d={}
cnt=0
for s in a:
  s_sorted = ''.join(sorted(s))
  if s_sorted in d:
    cnt += d[s_sorted]
    d[s_sorted]+=1
  else:
    d[s_sorted]=1
print(cnt)