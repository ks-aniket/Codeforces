// https://codeforces.com/contest/279/problem/B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    int l = 0, r = 1;

    long long sum = arr[0];
    int largest = -1;
    while(r <= N) {
        if(sum <= T) {
            if(largest < (r -l)) largest = (r-l);
            sum += arr[r];
            r++;
        } else {
            sum -= arr[l];
            l++;
        }
    }

    cout << largest;

    return 0;
}