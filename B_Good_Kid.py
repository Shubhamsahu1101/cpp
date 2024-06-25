a=int(input())
for i in range(a):
    b=input()
    c=input()
    l=c.split(' ')
    p,q=1,1
    ans=-1
    f=True
    for j in l:
        if(f and j=='0'):
            p*=1
            f=False
        else:
            p*=int(j)
    if(not f):
        print(p)
        continue
    for j in l:
        q=p
        q*=(int(j)+1)/(int(j) if int(j)>0 else 1)
        ans=max(ans,q)
    print(int(ans))

