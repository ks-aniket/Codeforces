# https://codeforces.com/problemset/problem/32/B
import sys
input = sys.stdin.readline

def sol():
    s = input()

    i = 0
    size = len(s)
    ans = ""
    while i < size:
        c = s[i] # get_next_char(s)
        i += 1

        match c:
            case '.':
                ans += "0"
            case '-':
                nxt = s[i]
                if nxt == ".":
                    ans += "1"
                elif nxt == "-":
                    ans += "2"
                i += 1

    print(ans)

sol()
