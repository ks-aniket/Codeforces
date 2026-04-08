#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n, k;
        cin >> n >> k;

        int sum = 0;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            sum += num;
        }

        if(sum % 2 != 0 || (n * k) % 2 == 0) cout << "YES"; 
        else cout << "NO";
        
        cout << "\n";
    }
    return 0;
}