#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int arr[N+1];
        for(int i = 1; i <= N; i++) cin >> arr[i];

        int i = 1;
        for(; i <= N; i++) {
            int index = i, jumpIndex = 2 * i;
            if(arr[i] == i) continue;

            while(jumpIndex <= N && arr[jumpIndex] < arr[index]) {
                swap(arr[jumpIndex], arr[index]);
                index = jumpIndex;
                jumpIndex = 2 * index;
            }

            if(arr[index] != index) {
                cout << "NO\n";
                break;
            }
        }

        if(i == N+1) cout << "YES\n";

    }

    return 0;
}