class Node:

    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

    def insert(self,data):
        if data<self.data:
            if self.left==None:
                self.left=Node(data)
            else:
                self.left.insert(data)

        else:
            if self.right==None:
                self.right=Node(data)

            else:
                self.right.insert(data)                


    def height(self):
        if self==None:
            return 0

        elif self.left==None and self.right==None :
            return 1

        elif self.left!=None and self.right==None:
            return self.left.height()+1  

        elif self.left==None and self.right!=None:            
             return self.right.height()+1                    

        else:
            return max(self.left.height()+1,self.right.height()+1)    
            
         

arr=list(map(int,input().split()))
data=Node(arr[0])

for i in range(1,len(arr)):
    data.insert(arr[i])


#data.preorder()

print(data.height() )   









'''
    def preorder(self):
         if self!=None:
            print(self.data,end=' ')
            if self.left!=None:
                self.left.preorder()
            
            if self.right!=None:
                self.right.preorder()

    def postoreder(self):
         if self!=None:

            if self.right!=None:
                self.right.postoreder()

            if self.left!=None:
                self.left.postoreder()

            print(self.data,end=' ')

'''