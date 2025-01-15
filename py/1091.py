import bisect
n,m = list(map(int,input().split()))
tickets = list(map(int,input().split()))
customers = list(map(int,input().split()))

tickets.sort()
for customer in customers:
    index = bisect.bisect_right()
