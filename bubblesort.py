l=[4,3,2,1]
for i in range(len(l)-1,0,-1):
               for j in range(i):
                   if l[j]>l[j+1]:
                       t=l[j]
                       l[j]=l[j+1]
                       l[j+1]=t
print(l)
                   
