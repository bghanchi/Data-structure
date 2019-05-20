n=int(input())
a=[]

m=int(input())
for i in range(m):
    t=int(input())
    a.append(t)


m=int(input())
b=[]

for i in range(m):
    v=int(input())
    b.append(v)

count=len(a)+len(b)
total=n



arr=[]

for i in range(1,n+1):
    arr1=[]
    for j in range(i+1,n+1):
        if (i in a and j in b) and a[b.index(j)] not in arr1:
            print(i,j)
            total+=1
            arr1.append(j)

    arr.append(arr1)        
    print(i,arr)


print(total-1)            



'''

for i in range(1,n+1):
    for j in range(i+1,n+1):
        if (i in a and j in b) and (a.index(i)!=b.index(j)):
            print(i,j,1)
            total+=1
        elif (i in a and j not in b) or (i not in a and j in b):
            print(i,j)
            total+=1
        elif (i not in a and j not in a)or (j not in a and i not in b):
            total=+1    

for i in range(1,n+1):
    if i not in a and i not in b:
        total+=count


for i in range(n):
    if a.index(i)!=


for i in range(m):
    for j in range(i+1,m):
        if a.index(a[i])!=b.index(a[j]):
            print(a[i],a[j])
            total+=1

'''