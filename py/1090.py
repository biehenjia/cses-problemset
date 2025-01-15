n,x = list(map(int,input().split()))
children = list(map(int,input().split()))
children.sort()
p1 = 0
p2 = n-1
res = 0
while p1 <= p2:
    
    if children[p1] + children[p2] <= x:
        p1 += 1
        p2 -=1 
        res +=1
    else:
        res +=1
        p2 -=1 

print(res)