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
        int A[n], B[n];

        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];

        // maximise the array A

        A[n-1] = max(A[n-1], B[n-1]);
        for(int i = n-2; i >= 0; i--) {
            A[i] = max(A[i+1], B[i]);

        }

        int sum;
        for(int i = 0; i < q; i++) {
            cin >> l >> r;
            sum = 0;
            for(int i =l-1; i < r; i++) {
                sum += A[i];
            }
            cout << sum << " ";
        }

        cout << "\n";
    }
    return 0;
}