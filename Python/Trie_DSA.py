import math
t=int(input())

arr=[[] for i in range(28)]


def isprime(n):
    f=True
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            f=False
            break

    return f                


for _ in range(t):
    s=input()
    for i in range(len(s)):
        index=ord(s[i])%97
        arr[index].append(i+1)

#    minn=10**9
    maxx=0 
    for i in arr:
        if len(i)>0:
            count=0
            for j in range(len(i)):
                lenth=j+1
                if isprime(lenth) and lenth>maxx:
#                    print(i,lenth)
                    count=lenth

            maxx=max(maxx,count)        

    if maxx>1:
        print(maxx)
    else:
        print(0)     

#print(arr)