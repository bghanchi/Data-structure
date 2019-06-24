t=int(input())

for _ in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]

    d1=(a[1]-a[0])
    d2=(a[2]-a[0])/2
    d3=(a[3]-a[0])/3
    
#    print(d1,type(d2)==int,d3)
    if d1==d2 and d1==d3:
        d=d1
        for i in range(n):
            print(int(a[0]+i*d),end=' ')

    elif d1==d3 and d1!=d2:
 #       print('Hello')
        d=d1
        for i in range(n):
            print(int(a[0]+i*d),end=' ')

    elif d1!=d2 and d2==d3:
        d=d2
#        print('d2')
        for i in range(n):
            print(int(a[0]+i*d),end=' ')

    else:
        d=a[2]-a[1]
        a[0]=a[1]-d
        for i in range(n):
            print(int(a[0]+i*d),end=' ')

    print()        


