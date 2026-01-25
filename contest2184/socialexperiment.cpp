#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll getMinDiff(ll N) {
    ll quot = N / 2;
    if(quot % 2 != 0) quot -= 1;
    ll minDiff = N - (2 * quot);

    if(quot > 0) {
        return minDiff % 2;
    } else {
        return minDiff;
    }
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        ll n;
        cin >> n;
        cout << getMinDiff(n) << "\n";
    }
    return 0;
}