n=int(input())
x1,y1,x2,y2=map(int,input().split())


a=[[int(1) for i in range(n)] for i in range(n)]

#print(a)


def chessboard(x1,y1,x2,y2,n):
    if (x1<0 or y1<0) or (x1>=n or y2>=n):
        return 0
    elif(x1==x2 or y1==y2):
        if(x1==x2):
#            print(x1,y1,x2,y2)
            return (max(y1,y2)-min(y1,y2))
        else:
#            print(max(x1,x2)-min(y1,y2))
            return (max(x1,x2)-min(x1,x2))    

    elif (a[x1][y1])==0:
        return 0 
    else:
        a[x1][y1]=0
        print(x1,y1,x2,y2) 
        return min(min(chessboard(x1+1,y1+1,x2,y2,n)+1,chessboard(x1-1,y1-1,x2,y2,n)+1),min(chessboard(x1+1,y1-1,x2,y2,n)+1,chessboard(x1-1,y1+1,x2,y2,n)+1))     





print(chessboard(x1,y1,x2,y2,n)+1)