#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int x, y;
        cin >> x >> y;
        bool isPoss = false;

        int res = abs(y);

        if(y >= 0) {
            x -= 2 * res;
        } else {
            x -= 4 * res;
        }

        if(x >= 0 && (x % 3 == 0)) isPoss = true;

        if(isPoss) {
            cout << "yes";
        } else {
            cout << "no";
        }
        // cout << i << " " << sub/3 << " " << k << "\n";
        cout << "\n";
    }

    return 0;
}