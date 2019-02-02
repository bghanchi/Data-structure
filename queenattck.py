n=int(input())
arr=[[0 for i in range(n)]for j in range(n)]

def isnotsafe(x,y,arr,n):
    for k in range(n):
        if arr[x][k]==1:
            return 1
    for k in range(n):
        if arr[k][y]==1:
            return 1
    i=x
    j=y
    while i>=0 and j>=0:
            if arr[i][j]==1 :
                return 1
            i=i-1
            j=j-1 
    i=x
    j=y        
    while i<n-1 and j>=0:
            if arr[i][j]==1 :
                return 1
            i=i+1
            j=j-1 

    

    return 0                                 

def queenattck(arr,i,n):
    if i==n:
        return 1
    else:
        for j in range(n):
            if isnotsafe(i,j,arr,n):
                continue
            else:
#                print('before',arr)
                arr[i][j]=1
#                print('After',arr)
                if queenattck(arr,i+1,n):
                    return 1
                else:
                    arr[i][j]=0
        return 0                                   


if(queenattck(arr,0,n)):
    if n==3 or n==2:
        print('No')    
        for i in arr:
            print(i)
    else:    
        print('Yes')    
        for i in arr:
            print(i)

else:
    print('No')    

