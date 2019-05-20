n=int(input())

x1,y1,x2,y2=map(int,input().split())

step=0

while(x1!=x2 or y1!=y2):
#    print(x1,y1,x2,y2)
    
    if x1<x2 and y1<y2:
        x1+=1
        y1+=1
        step+=1
    elif x1>x2 and y1>y2:
        x1-=1
        x2-=1
        step+=1    
    else:
        if x1<x2 and y1>y2:
            x1+=1
            y1-=1
            step+=1

        if x1>x2 and y1<y2:
            x1-=1
            y1+=1
            step+=1

        if x1==x2:
#            print(max(y1,y2)-min(y1,y2),'2')
            step+=max(y1,y2)-min(y1,y2)
            break
        if y1==y2:
            step+=max(x1,x2)-min(x1,x2)
            break                    

#    print(x1,y1,x2,y2,'1')

print(step)        