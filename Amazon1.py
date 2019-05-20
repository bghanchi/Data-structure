t=int(input())

for _ in range(t):
    arr=[int(0) for i in range(11)]
    l,r,g=map(int,input().split())
    if g>r:
        print(0)
    else:
        count=0
        for i in range(l,r+1):
            if i%g==0:
                count+=1
        print(count)          



'''
        count=int(r/g)-int(l/g)
        if l%g==0 or r%g==0:
            count+=1

'''
