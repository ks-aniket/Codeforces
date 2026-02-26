// https://codeforces.com/contest/2205/problem/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++) cin >> arr[i];

        int largestIndex = 0;
        for(int i = 0; i < N; i++) {
            if(arr[i] == N) largestIndex = i;
        }

        swap(arr[0], arr[largestIndex]);

        for(int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";

    }
    return 0;
}