// https://codeforces.com/contest/2192/problem/B

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

        int count_1s = 0, count_0s = 0;

        for(auto& c : s) {
            if(c - '0') count_1s++;
            else count_0s++;
        }

        int ans = 0;
        vector<int> sol;
        if(count_0s % 2 != 0) {
            // count of 0 bits is odd
            // perform the operation on all the 0 bits
            // 1 bits will be flipped an odd number of times
            // 0 bits will be flipped an even number of times
            ans = count_0s;
            for(int i = 0; i < n; i++) {
                if(s[i] - '0' == 0) sol.push_back(i+1);
            }
        } else if(count_1s % 2 == 0) {
            // when the count of 0 bits is odd, and count of 1 bits is even
            // perform the operation on all the 1 bits
            // 0s will be flipped an even number of times
            // all the 1s will be flipped an odd number of times
            ans = count_1s;
            for(int i = 0; i < n; i++) {
                if(s[i] - '0' == 1) sol.push_back(i+1);
            }


        } else {
            // when count of 1 bits is odd, it is impossible to achieve the result
            ans = -1;
        }

        cout << ans << "\n";
        for(auto& i : sol) {
            cout << i << " ";
        }
        if(sol.size() > 0)
            cout << "\n";

    }
    return 0;
}