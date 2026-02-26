// https://codeforces.com/contest/1398/problem/C

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        string s;
        cin >> s;

        vector<int>  vec;

        for(char c : s) {
            vec.push_back(c - '0');
        }

        vector<int> subsums(N+1, 0);
        for(int i = 0; i < N; i++) subsums[i+1] = subsums[i] + vec[i];

        int count = 0;
        for(int i = 1; i <= N; i++) {
            for(int j = 0; j + i <= N; j++) {
                int sum = subsums[j+i] - subsums[j];
                if(sum == i) count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}