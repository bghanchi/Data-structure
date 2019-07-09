s=input()
def myAtoi(st):
    s=''
    negative=0
    positive=0
    for i in st:
        if i=='-':
            if positive:
                return 0
            negative=1
        elif i=="+":
            negative=0
        elif i>='0' and i<='9' or i=='.':
            s+=i        
        elif i>='a' and i<='z':
            break  
    
    if len(s)>0:
        if '.' in s:
            if negative:
                return max(-pow(2,31),-int(float(s)))
            else:
                return min(int(float(s)),pow(2,31)-1)

        else:
            if negative:
                return max(-pow(2,31),-int(s))
            else:
                return min(int(s),pow(2,31)-1)
    else:
        return 0            


print(myAtoi(s))
