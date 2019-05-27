t=int(input())

vovel=['a', 'e', 'i', 'o', 'u']

for _ in range(t):
    count=0
    n=int(input())
    s=input()
    for i in range(n):
        if s[i] not in vovel and s[i+1] in vovel:
            count+=1

    print(count)