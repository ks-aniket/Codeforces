#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;

    int n, q;
    int l, r;
    int m1;
    while(T--) {
        cin >> n >> q;
        int A[n], B[n], C[n+1];

        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];

        // maximise the array A

        C[n] = max(A[n-1], B[n-1]);
        for(int i = n-1; i > 0; i--) {
            m1 = max(A[i-1], B[i-1]);
            C[i] = max(m1, C[i+1]);
        }
        C[0] = 0;

        // subarray sums
        for(int i = 1; i < n+1; i++) {
            C[i] += C[i-1];
        }

        for(int i = 0; i < q; i++) {
            cin >> l >> r;
            cout << (C[r] - C[l-1]) << " ";
        }

        cout << "\n";
    }
    return 0;
}