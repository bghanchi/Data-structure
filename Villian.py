t=int(input())

for _ in range(t):
    n=int(input())
    villian=[int(i) for i in input().split()]
    player=[int(i) for i in input().split()]

    villian.sort()
#    player.sort()

    i=n-1
    f=0
#    print(player)


    for power in player:
        
        i=len(villian)-1
        while i>=0:
            if power>=villian[i]:
                del(villian[i])
                break
            i-=1    

    if len(villian)==0:
        print("WIN")
    else:
        print("LOSE")             


'''
    while i>=0:
        if player[i]<villian[i]:
            f+=1
            break

        i=-1   
    
    if f==0:
        print("WIN")
    else:
        print("LOSE")    
'''

