import math

def fermat(n):
    if (2**(n-1))%n==1:
        return True
    else:
        return False

def isprime(n):
    f=True
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            f=False
            break

    return f                


for i in range(2,100):
    if(fermat(i)):
        print(i,end=' ')     