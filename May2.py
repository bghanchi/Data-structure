t=int(input())

for _ in range(t):
    n=int(input())

    if n<20:
        print(n)

    else:
        s=list(str(n))
        n1=len(s)
    #    print(s[0])
        v=int('1'+'0'*(n1-1))
    #    print(v)
        n1=int(int(s[0])*v)-1
        print(n1)




'''
t=int(input())

for _ in range(t):
    n=int(input())

    if n<20:
        print(n)

    else:
        s=list(str(n))
        if s.count('9')==len(s):
            print(n)
        else:    
            n1=len(s)
        #    print(s[0])
            v=int('1'+'0'*(n1-1))
        #    print(v)
            print(int(int(s[0])*v)-1)

'''