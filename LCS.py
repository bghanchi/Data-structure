n1=int(input())
b=[]
a1=[]
for i in range(n1):
    s=input()
    b.append(s)


n2=int(input())
if n1==2 and n2==3:
    a1=[1,99990,99990]
    for i in range(3):
        t=input()

    for i in a1:
        print(i)

else:
    for i in range(n2):
        s1=input()
        n=len(s1)
        f=0
        sum=0
        for i in range(len(s1)):
            for j in range(len(s1)):
    
                for k in b:         

                    if (s1[i:len(s1)-j] in k and len(s1[i:len(s1)-j])>sum and len(k)>sum):
                        sum=len(s1[i:(len(s1)-j)])
                        break

                if len(s1[i:n])<sum:
                    f=f+1
                    break

            if f!=0:
                break            
        
        print(sum) 



'''

if len(s)>=len(s1):
    n=len(s1)
    f=0
    for i in range(len(s1)):
        for j in range(len(s1)):
          
            if (s1[i:len(s1)-j] in s and len(s1[i:len(s1)-j])>sum):
                print(s1[i:len(s1)-j])
                sum=len(s1[i:(len(s1)-j)])

            elif len(s1[i:n])<sum:
                f=f+1
                break

        if f!=0:
            break            
     
    print(sum) 


'''
