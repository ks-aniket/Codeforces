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

        if(n == 1 && s[0] == '1') {
            cout << "0\n";
            continue;
        }

        int counts[2] = {0, 0};
        for(int i = 0; i < n; i++) {
            counts[s[i] - '0']++;
        }
        
        if(!counts[1]) {
            cout << "-1\n";
            continue;
        } else {
            if(counts[1] >= counts[0]) {
                cout << n << "\n";
            } else {
                cout << (n+1) << "\n";
            }

        }
    }
    return 0;
}