array=[i for i in input().split()]


def groupAnagrams(s):
        arr=[]
        while len(s)>0: 
            arr1=[]
            arr1.append(s[0])
            j=1
            while j<len(s):
#                print(j,s)
                s1=list(s[0])
                s1.sort()
                s1="".join(s1)
                s2=list(s[j])
                s2.sort()
                s2="".join(s2)

                if s1==s2:
                    arr1.append(s[j])
                    del s[j] 
                else:
                    j+=1            

            del s[0]    
            arr.append(sorted(arr1))

#        print(arr)
        arr=sorted(arr,key=len,reverse=True)    
        return arr 

    

print(groupAnagrams(array))    


'''
                s11=list(s[-1])
                s11.sort()
                s11="".join(s11)
                s22=list(arr1[0])
                s22.sort()
                s22="".join(s22)
            
                if s[-1] not in arr1 and s11==s22:     
                    arr1.append(s[-1])
                    del s[-1]

'''
'''
            for j in range(1,len(s)):
                if s[0].sort()==s[j].sort():
                    arr1.append(s[j])
                    del s[j]        
            del s[0]        
            print(s)

'''