#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;

    unordered_map<int, int> m;
    
    for(int i = 0; i < N; i++) {
        int c;
        cin >> c;
        m[c]++;
    }

    int lim = 2 * N - 1;
    for(auto& p : m) {
        if(p.second >= lim) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}