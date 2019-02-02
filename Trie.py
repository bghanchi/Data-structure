n,m=map(int,input().split())
st=[0]*n
we=[0]*n
ind=[0]*n
for i in range(n):
    s,w=map(str,input().split())
    w=int(w)
    st[i]=s
    we[i]=w
    ind[i]=s[0]

string="".join(ind)
count=-1
i=0

def check(s,s1):
    i=0
    while i<len(s1) and s[i]==s1[i]:
        i=i+1
    if i==len(s1):
        return 1
    else:
        return 0        


for index in range(m):
    s=input()
    i=0
    count=-1
    if string.find(s[0])>-1:
        i=ind.index(s[0])
    #    print(i,ind[i])
    
        while i<n and ind[i]==s[0]:
            if st[i].count(s) and we[i]>count and check(st[i],s) :
    #            print(ind[i].count(s),we[i])
                print(st[i],we[i])
                count=we[i]
            i=i+1

    print(count)            
    



#print(st)
#print(we)
#print(ind)    
