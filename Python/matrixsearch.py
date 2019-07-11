n=int(input())

li=[int(0) for i in range(n)]

for i in range(n):
    t=map(int,input().split())
    li[i]=sorted(list(t))


key=int(input())

low=0
high=n-1
f=0
while low<=high:
    mid=int((low+high)/2)
#    print(li[mid])
    if li[mid][len(li[mid])-1]>=key and li[mid][0]<=key:
#        print(li[mid][len(li[mid])-1])
        for i in li[mid]:
            if i==key:
                f+=1
                break
        break

    elif li[mid][len(li[mid])-1]<key:
        low=mid+1


    elif li[mid][0]>key:
        high=mid-1        


if f!=0:
    print(1)
else:
    print(0)            
