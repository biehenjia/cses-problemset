def get(): 
    return list(map(int,input().split()))

n,q = get()

nums = get()

segtree = [0] * (4*n)



for i in range(q):
    a,b = get()