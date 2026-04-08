// https://codeforces.com/contest/1826/problem/D

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n+1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    // left and right prefix largest values; 1-indexed
    vector<ll> leftPrefix(n+1, 0), rightPrefix(n+1, INT_MIN);
    for(int i = 2; i <= n-1; i++) {
        leftPrefix[i] = max(leftPrefix[i-1], arr[i-1] + i-1);
    }

    for(int i = n-1; i >= 2; i--) {
        rightPrefix[i] = max(rightPrefix[i+1], arr[i+1] - (i+1));
    }

    // find the largest sum
    ll largest = INT_MIN;
    for(int i = 1; i <= n-1; i++) {
        largest = max(largest, leftPrefix[i] + arr[i] + rightPrefix[i]);
    }

    cout << largest << "\n";
}

int main() {
    int T;
    cin >> T;

    while(T--) {
     solve();
    }
    return 0;
}