#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(string s, string mat, int c, int l, int r, int n) {
    if(c == n) return true;

    if(s[c] == '?') {
        return isPossible(s, mat, c+1, l+1, r, n) || 
            isPossible(s, mat, c+1, l, r-1, n);
    }
    if(s[c] == mat[l]) {
        return isPossible(s, mat, c+1, l+1, r, n);
    } else if(s[c] == mat[r]) {
        return isPossible(s, mat, c, l, r-1, n);
    } else {
        return false;
    }
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string mat(n, 'a');
        for(int i = 1; i < n; i+=2) mat[i] = 'b';

        bool isPoss = isPossible(s, mat, 0, 0, n-1, n);

        if(isPoss) {
            cout << "yes";
        } else {
            cout << "no";
        }

        cout << "\n";

    }
    return 0;
}