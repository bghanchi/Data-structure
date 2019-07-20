n=int(input())

def reverse(A):
    st=''
    i=0
    while i<32:
        if A&1<<i==0:
            st+=str(0)
        else:    
            st+=str(1)
        i+=1    

    print(st)

reverse(n)        
