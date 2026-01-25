#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int getCount(ll n, ll k) {

    ll floor = n, ceil = n;
    int count = 0;
    while(floor && ceil) {
        // cout << "f: " << floor << " c: " << ceil << " count: " << count << "\n";
        if(floor == k || ceil == k) return count;

        floor = floor / 2;
        if(ceil % 2 != 0) {
            ceil = ceil / 2 + 1;
        } else {
            ceil = ceil / 2;
        }
        count++;
    }

    return -1;
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        ll n, k;
        cin >> n >> k;
        cout << getCount(n, k) << "\n";
    }

    return 0;
}