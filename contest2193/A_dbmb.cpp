#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    int n, s, x;
    int sum;
    int curr;
    while(T--) {
        cin >> n >> s >> x;
        sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> curr;
            sum += curr;
        }
        // for(int i = 0; i < n; i++) sum += arr[i];


        int diff = s - sum;
        if(diff >= 0 && diff % x == 0) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}