t=int(input())

for _ in range(t):
    count=0
    n=int(input())
    s=input()
    ss=input()
    s1=set(s)
    for i in s1:
        if i in s and i in ss:
            count+=min(s.count(i),ss.count(i))

    print(count)        
    
