n,m=map(int,input().split())
MinCost=[[-1 for i in range(m)]for j in range(n)]
i1,j1=map(int,input().split())
cost=[[0 for i in range(m)]for j in range(n)]
a=[]
total=0
for i in range(n):
    a=list(map(int,input().split()))
    for j in range(m):
        cost[i][j]=a[j]

def Mincosst(i,j,MinCost,cost):
    if MinCost[i][j]!=-1:
        return MinCost[i][j]

    elif i==0 and j==0:
        return cost[i][j]        

    elif i==0 and j!=0:
         MinCost[i][j]=Mincosst(i,j-1,MinCost,cost)+cost[i][j]
         return MinCost[i][j]

    elif i!=0 and j==0:
         MinCost[i][j]=Mincosst(i-1,j,MinCost,cost)+cost[i][j]
         return MinCost[i][j]


    else:
        MinCost[i][j]=min(Mincosst(i-1,j,MinCost,cost),Mincosst(i,j-1,MinCost,cost))+cost[i][j]    
        print(MinCost[i][j])
        return MinCost[i][j]  

print(Mincosst(i1,j1,MinCost,cost))