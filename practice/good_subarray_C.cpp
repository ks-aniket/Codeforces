// https://codeforces.com/contest/1398/problem/C

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> pref_sum(n+1);
    pref_sum[0] = 0;
    for(int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        pref_sum[i] = c - '0';
    }

    for(int i = 1; i <= n; i++) pref_sum[i] += pref_sum[i-1];

    map<int, ll> sum_dist;
    for(int i = 0; i <= n; i++) sum_dist[pref_sum[i] - i]++;

    ll good_arrays = 0;
    for(const auto& [_, f] : sum_dist) {
        good_arrays += f*(f-1)/2;
    }
    cout << good_arrays << "\n";
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        solve();
    }
    return 0;
}