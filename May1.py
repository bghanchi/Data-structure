
for n in range(1000,2000):

    maxx=0  
    for i in range(1,n+1):
            n1=int(''.join(list(reversed(str(i)))))
            if n1>maxx:
#                print(n1,i)
                count=i
                maxx=n1

    count1=0
    if n<20:
        count1=max(count1,n)

    else:
        s=list(str(n))
        n1=len(s)
        if s.count('9')==n1:
            count1=max(count1,n)

        elif n1>2:
        #    print(s[0])
            v=int('1'+'0'*(n1-2))
        #    print(v)
#            print(int(int(s[0]+s[1])*v)-1)
            count1=max(count1,int(int(s[0]+s[1])*v)-1)
        else:
        #    print(s[0])
            v=int('1'+'0'*(n1-1))
        #    print(v)
#            print(int(int(s[0])*v)-1)
            count1=max(count1,int(int(s[0])*v)-1)
                
    if count!=count1:
        print(i,count,count1)

'''
#    n=int(''.join(reversed(str(n))))
    maxx=0
#    print(n)
    for i in range(1,n+1):
            n1=int(''.join(list(reversed(str(i)))))
            if n1>maxx:
#                print(n1,i)
                count=i
                maxx=n1

    print(count)    

'''


'''
    count=0
    ss=''
    v=int(n/10)
    s=list(str(n))
    if s[-1]=='9':
        v=s[:len(s)-1]
        v=list(reversed(v))
        ss=str(''.join(v))
#        print(ss)
        print('9'+ss)

    elif n<19:
        print(n)

    else:
        v=list(str(v*10-1))
        print(''.join(reversed(v)))    


'''