from math import log
n = int(input()) 

t = 0
f = 0
prevtwos = [] 
prevfives = [] 

tmax = 0
fmax = 0

maxtwos = int(log(n,2))
maxfives = int(log(n,5))
# print(maxtwos,maxfives)

for i in range(maxtwos,0,-1):
    temp = 2**i
    q = n//temp
    prevtwos.append(q-tmax)
    tmax = max(tmax,q)

for j in range(maxfives,0,-1):
    temp = 5**j
    q = n//temp
    prevfives.append(q-fmax)
    fmax = max(fmax,q)
# print(prevtwos)
# print(prevfives)
t = sum(qty * (maxtwos-i) for i,qty in enumerate(prevtwos))
f = sum(qty*(maxfives-i) for i,qty in enumerate(prevfives))

# print(t,f)
print(min(t,f))

