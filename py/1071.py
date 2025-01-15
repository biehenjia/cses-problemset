t = int(input())
for i in range(t):
    y,x = list(map(int,input().split()))
    m = max(x,y)
    if x < y:
        if m %2:
            print(x+(m-1)**2)
        else:
            print(m**2-x+1)
    else:
        if m%2:
            print(m**2-y+1)
        else:
            print(y+(m-1)**2)
