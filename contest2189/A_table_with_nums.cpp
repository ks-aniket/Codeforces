#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    int n, h, l;
    int lessthanboth = 0;
    int inbetween = 0;
    int total = 0;

    int min, max;
    while(T--) {
        cin >> n >> h >> l;
        int arr[n];
        total = 0;
        for(int i = 0; i < n; i++) cin >> arr[i];

        // cout << "n: " << n << " " << h << " " << l << "\n";
        min = (h < l ? h : l);
        max = (h > l ? h : l);

        // count the number of k's less than h and l
        inbetween = lessthanboth = 0;
        for(int i = 0; i < n; i++) {
            int a = arr[i];
            if(a <= min) lessthanboth++;
            else if(a <= max) inbetween++;
        }

        if(lessthanboth > inbetween) {
            total += inbetween;
            total += (lessthanboth - inbetween) / 2;
        } else {
            total += lessthanboth;

        }
        // cout << lessthanboth << " " << lessthan_h << " " << lessthan_l << "\n";
        
        cout << total << "\n";
        // cout << "\n";
    }

    return 0;
}