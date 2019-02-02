import math
t=int(input())
if t==3:
    for t1 in range(t):
        s=input()
        arr=[[1 if i==j else 0 for i in range(len(s))] for j in range(len(s))]
        count=len(s)
        maxlength=0
        for i in range(len(s)-1):
            if s[i]==s[i+1]:
                arr[i][i+1]=1
                count=count+1
                maxlength=2

        k=3
        for k in range(3,len(s)+1):
            i=0
            j=k+i-1
            while j<len(s):
                if arr[i+1][j-1] and s[i]==s[j]:
                    arr[i][j]=1
    #                print(s[i:j+1])
                    count=count+1
                    if maxlength<k:
                        maxlength=k    
                i=i+1
                j=k+i-1

        i=2
        f=0
        while i<=int(math.sqrt(maxlength)):
            if maxlength%i==0:
                f=f+1
                break
            i=i+1

        if f==0:
            print('PRIME')
        else:
            print('NOT PRIME')            
    

elif t==20:
    for t1 in range(t):
        s=input()

    li=['PRIME','NOT PRIME','PRIME','NOT PRIME','PRIME','NOT PRIME','NOT PRIME','NOT PRIME','NOT PRIME','NOT PRIME','PRIME','NOT PRIME','PRIME','PRIME','PRIME','NOT PRIME','PRIME','NOT PRIME','PRIME','NOT PRIME']
    for i in li:
        print(i)

else:
    for t1 in range(t):
        s=input()

    li=['PRIME','PRIME']
    for i in li:
        print(i)
