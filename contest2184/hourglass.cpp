#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll getRemTime(ll s, ll k, ll m) {
    ll quot = m / k;
    if(quot == 0) return 0;

    ll diff = m - quot * k;

    ll ans = 0;

    if(s <= k) {
       ans = s < diff ? 0 : (s - diff);
    } else {
        // cap = k
        ans = k - diff;
    }

    return ans;
}


int main() {
    int T;
    cin >> T;

    while(T--) {
        ll s, k, m;
        cin >> s >> k >> m;
        cout << getRemTime(s, k, m) << "\n";
    }
    return 0;
}