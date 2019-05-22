t,n=map(int,input().split())

arr=dict()

for _ in range(t):
    s,v=map(str,input().split())

    for i in range(len(s)):
        if s[:i+1] not in arr.keys():
            arr[s[:i+1]]=int(v)
        elif s[:i+1] in arr.keys() and arr[s[:i+1]]<int(v):
#            print(arr[s[:i+1]],int(v))
            arr[s[:i+1]]=int(v)

#    print(arr) 

for i in range(n):
    s=input()
    if s in arr.keys():
        print(arr[s])
    else:
        print(-1)    

