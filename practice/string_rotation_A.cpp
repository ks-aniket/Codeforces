// https://codeforces.com/contest/2192/problem/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int curr = s[0];
        bool repeats = false;
        int blocks = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] == curr) {
                repeats = true;
                continue;
            }
            else {
                curr = s[i];
                blocks++;
            }
        }


        int ans = blocks;
        if(s[0] != s[n-1] && repeats) ans += 1;
        cout << ans << "\n";
    }
    return 0;
}