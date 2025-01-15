

def solve():
    s = input()
    alpha = [0 for i in range(26)]
    for c in s:
        alpha[ord(c)-ord('A')] +=1
    ct = 0
    res = [0 for i in range(len(s))]
    prev = 0
    for i,a in enumerate(alpha):
        if a %2:
            ct +=1
            if ct > 1:
                return 'NO SOLUTION'
            res[len(s)//2] = chr(i+ord('A'))
        for j in range(a//2):
            res[prev] = chr(i+ord('A'))
            res[-prev-1] = chr(i+ord('A'))
            prev +=1
    return "".join(res)
    

print(solve())