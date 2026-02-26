// https://codeforces.com/contest/2205/problem/B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// assume n >= 2
bool isPrime(int n) {
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}


int main() {
   
    int T;
    cin >> T;
 
    while(T--) {
        int N;
        cin >> N;

        // first prime that divides N
        int prime = 2;
        int K = 1;
        while(N && prime <= N) {
            if(N % prime == 0) {
                K *= prime;
                N /= prime;
            }
            prime++;

            while(!isPrime(prime) && prime <= N) prime++;

        }

        cout << K;

        cout << "\n";
    }

    return 0;
}