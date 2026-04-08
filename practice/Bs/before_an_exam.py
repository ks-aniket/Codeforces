# https://codeforces.com/problemset/problem/4/B
# Always use sys.stdin.readline
import sys
input = sys.stdin.readline

def sol():
    d, sum = map(int, input().split())

    vals = list()
    for i in range(d):
        min, max = map(int, input().split())
        vals.append((min, max))


    total_sum = 0
    ans = list()
    for min, max in vals:
        total_sum += min
        ans.append(min)
        if total_sum > sum:
            print("NO")
            return
            
    i = 0
    for i in range(d):
        diff = abs(ans[i] - vals[i][1])
        sum_diff = (sum - total_sum)

        if sum_diff <= diff:
            ans[i] += sum_diff
            total_sum += sum_diff
        else:
            ans[i] += diff
            total_sum += diff

    if total_sum == sum:
        print("YES")
        for hrs in ans:
            print(hrs, end=" ")
    else:
        print("NO")



sol()