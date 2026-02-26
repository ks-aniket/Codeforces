#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define PRIZE 67

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int arr[N];

        for(int i = 0; i < N; i++) cin >> arr[i];

        int i = 0;
        for(; i < N; i++) {
            if(arr[i] == PRIZE) {
                cout << "YES\n";
                break;
            }
        }

        if(i == N) cout << "NO\n";
    }

    return 0;
}