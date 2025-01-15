n,m,k = list(map(int,input().split()))
desired = list(map(int,input().split()))
apartments = list(map(int, input().split()))

desired.sort()
apartments.sort()

res = 0
p1 = 0
p2 = 0

while p1 < n and p2 < m:
    if abs(desired[p1] - apartments[p2]) <= k:
        res +=1 
        p1 +=1
        p2 += 1
    elif desired[p1] - apartments[p2] > k:
        p2 += 1
    else:
        p1 +=1 
print(res)

