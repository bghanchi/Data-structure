from collections import deque
arr=[int(i) for i in input().split()]
n=len(arr)



def split(x):
    if len(x)<=1:
#        print(x)
        return x
    else:
        mid=int(len(x)/2)
#        print(x)  
        a=split(x[:mid])
        b=split(x[mid:])
#        print(a,b)
        return merge(a,b)



def merge(a,b):
    c=list()
    print(a,b)
    a=deque(a)
    b=deque(b)
    while len(a)>0 or len(b)>0:
        if len(a)>0 and len(b)>0:
            if a[0]<b[0]:
                c.append(a[0])
                a.popleft()

            else:
                c.append(b[0])
                b.popleft()
        elif len(a)==0 and len(b)>0:
            c+=b
            b.clear()
        else:
            c+=a
            a.clear()

    return c      






arr=split(arr)
print(arr)