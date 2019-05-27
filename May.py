t=int(input())

for _ in range(t):
    n=int(input())
    v=int(n/10)
    s=list(str(n))

    if s[-1]=='9':
        v=s[:len(s)-1]
        v=list(reversed(v))
        ss=str(''.join(v))
#        print(ss)
        print('9'+ss)
    
    elif n<19:
        n1=int(''.join(list(reversed(str(n)))))
        print(max(n,n1))
#        print(n)
    else:
        if n%10==0:
            rem=n%10
            while rem==0:
                n=int(n/10)
                rem=n%10

        if n>9:
            print(n)
            v=int(n/10)
            s=list(str(n))
            v=list(str(v*10-1))
#            print(s,v)
            print(''.join(reversed(v)))    
        else:
            print(n)    
