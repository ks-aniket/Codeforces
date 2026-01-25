#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int T;
    cin >> T;

    int n;
    int l, r;
    while(T--) {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        int num = n, index = 0;
        while(index < n && arr[index] == num) {
            index++;
            num--;
        }

        if(index < n) {
            l = index;
            while(arr[index] != num) index++;
            r = index;
        } else {
            l = n;
            r = n-1;
        }

        //reverse [l, r]
        // while(l <= r) {
        //     swap(arr[l], arr[r]);
        //     l++;
        //     r--;
        // }

        for(int i = 0; i < l; i++) {
            cout << arr[i] << " ";
        }

        for(int i = r; i >= l; i--) {
            cout << arr[i] << " ";
        }
        for(int i = r+1; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";

    }
    return 0;
}