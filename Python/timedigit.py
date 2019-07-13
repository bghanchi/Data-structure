h,m=map(int,input().split())

count=0
for i in range(h+1):
    if len(str(i))==1 and len(set(str(i)))==1:
        count+=1
        print(str(i)+':'+str(i))

        if int(str(i)+str(i))<=m:
            count+=1    
            print(str(i)+":"+str(i)+str(i))

    elif len(str(i))>1 and len(set(str(i)))==1:
        n=len(str(i))
        #print(str(i))
        while n>0:
            if int(str(i)[0]*n)<=m:
                print(str(i)+":"+str(i)[0]*n,'Hello  Bharat Kumar')
                count+=1
            n-=1
#        print(str(i)+":"+str(i)[0])
#        print(n)
#        count+=n   
    

print(count-1)   


'''
    if i<24 and len(set(str(i)))==1 and i<60:
        count+=1
        print(str(i)+':'+str(i))

    if int(str(i)+str(i))<m:
        print(str(i)+":"+str(i)+str(i))
        count+=1    


'''


#    if len(str(i))>1 and len(set(str(i)))==1 and int(str(i)+str(i))<60:
     