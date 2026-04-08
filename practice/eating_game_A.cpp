// https://codeforces.com/contest/2200/problem/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto& a : arr) cin >> a;

    int largest = INT_MIN;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
            count = 1;
        } else if(largest == arr[i]) count++;
    }

    cout << count << "\n";
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        solve();

    }
    return 0;
}