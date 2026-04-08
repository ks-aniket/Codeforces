# https://codeforces.com/problemset/problem/34/B
import sys
input = sys.stdin.readline

def sol():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    negs = []
    for a in arr:
        if a < 0:
            negs.append(a)

    negs = sorted(negs)

    maxSum = 0
    minIndex = min(m, len(negs))
    for i in range(minIndex):
        maxSum += abs(negs[i])


    print(maxSum)


sol()