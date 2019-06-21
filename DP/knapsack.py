N,W=map(int,input().split())
arr=[int(0) for i in range(N)]
value=[int(0) for i in range(N)]

for i in range(N):
    a,b=map(int,input().split())
    arr[i]=a
    value[i]=b


def coin(arr,value,W,n):
    if n<0 or W==0:
        return 0

    elif arr[n]>W:
#        print(1)
        return coin(arr,value,W,n-1)
    elif n==0 and W>0:
#        print(2)
        return coin(arr,value,W-arr[n],n-1)+value[n] 
    else:
#        print(W)
        return max(coin(arr,value,W-arr[n],n-1)+value[n],coin(arr,value,W,n-1))





print(coin(arr,value,W,N-1))