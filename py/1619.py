n = int(input())
s = []
for i in range(n):
    a,b = list(map(int,input().split()))
    s += [(a,1),(b,-1)]

s.sort()
people = 0
res = 0
for time in s:
    people += time[1]
    res = max(res,people)
print(res)

