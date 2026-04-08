# https://codeforces.com/problemset/problem/118/B
import sys
input = sys.stdin.readline


def print_line(i : int, width : str):
    ans = [] 
    for j in range(i+1):
        ans.append(str(j))

    for j in range(i-1, -1, -1):
        ans.append(str(j))

    ans_str = " ".join(ans)
    ans_str = width + ans_str
    print(ans_str)


def sol():
    n = int(input())

    for i in range(0, n+1):
        width = " " * ( ( n - i) * 2)
        print_line(i, width)

    for i in range(n-1, -1, -1):
        width = " " * ( ( n - i) * 2)
        print_line(i, width)


sol()