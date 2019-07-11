n=int(input())


def f(n):
    count=1
    for i in range(1,n+1):
        count*=i
    
    return count


def pascal(n):
    arr=[int(0) for i in range(n+1)]

    for i in range(n+1):
        arr[i]=int(int(f(n))/int(f(n-i)*f(i)))

    print(arr)




pascal(n)