s=input()


def lengthOfLongestSubstring(s):
    s1=[int(0) for i in range(len(s))]
    maxx=0
    m=dict()
    if len(s)>0:
        s1[0]=1
        m[s[0]]=0
        maxx=1
        for i in range(1,len(s)):
            if s[i] not in m.keys():
                s1[i]=s1[i-1]+1
                m[s[i]]=i
            else:
                s1[i]=min(i-m[s[i]],s1[i-1]+1)
                m[s[i]]=i 

            maxx=max(maxx,s1[i])
        print(s1)           
        return maxx
    else:
        return 0


lengthOfLongestSubstring(s)