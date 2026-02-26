#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n, m, d;
        cin >> n >> m >> d;

        // each box can carry the following number of boxes
        int cap = d / m;

        // each tower will have cap + 1 boxes
        int ans = ceil((float) n / (cap+1));

        cout << ans << "\n";
    }
    return 0;
}