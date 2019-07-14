arr=[int(i) for i in input().split()]

def swap(a,b):
    return b,a

def nextpermutation(arr):
    i=0
    j=0
    f=0
    k=0
    n=len(arr)
    for i in range(n-1):
        if arr[i]<arr[i+1]:
               f+=1
               j=i

#    print(f)
    if (f==0):
        arr.sort()
    else:

        i=len(arr)-1

        while i>=0 and arr[i]<=arr[j]:
            i-=1

        arr[j],arr[i]=arr[i],arr[j]

        arr=list(arr[:i+1])+list(reversed(arr[i+1:]))

    print(arr)    



nextpermutation(arr)


'''
        if (i >= 0) {
            int j = nums.length - 1;
            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }
            swap(nums, i, j);
        }
        reverse(nums, i + 1);
'''              
