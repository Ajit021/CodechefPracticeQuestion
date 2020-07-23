t=int(input())
for i in range(t):
    s=input()
    dic={}
    for j in s:
        if j not in dic:
            dic[j]=0
        dic[j]+=1
    a=[]
    for k in dic:
        a.append(dic[k])
    a.sort()
    n=len(a)
    if n>=4 and a[3]!=a[2]+a[1]:
       a[0],a[1]=a[1],a[0]
    r=True
    if n>=3:
        for i in range (2,n):
            if a[i]!=a[i-1]+a[i-2]:
                r=False
                break;
    if r:
        print("Dynamic")
    else:
        print("Not")
        
            

