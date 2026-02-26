#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        long long int N, K;
        cin >> N >> K;

        cout << N - (N/K) << "\n";
    }
    

    return 0;
}