// https://codeforces.com/contest/2192/problem/C

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int T;
    cin >> T;

    while(T--) {
        ll N, health, k;
        cin >> N >> health >> k;

        vector<ll> dam(N);
        for(auto& d : dam) cin >> d;

        ll sum = 0;
        for(auto& d : dam) sum += d;

        ll reloads = health / sum;

        ll res = health % sum;

        ll ans;
        if(res == 0) {
            // last magazine fully used
            ans = reloads * N + (reloads - 1) * k;
        } else {
            // last magazine only partially used
            // res = health here
                    // find min([0, index]) and max([index, N])
            // swap if max > min

            vector<ll> subSum(N, 0);
            vector<ll> largest(N+1), smallest(N);

            subSum[0] = dam[0];
            smallest[0] = dam[0];
            for(ll i = 1; i < N; i++) {
                subSum[i] = subSum[i-1] + dam[i];
                // record smallest in [0, i]
                if(dam[i] < smallest[i-1]) smallest[i] = dam[i];
                else smallest[i] = smallest[i-1];
            }

            largest[N] = 0;
            for(ll i = N-1; i >= 0; i--) {
                if(dam[i] > largest[i+1]) largest[i] = dam[i];
                else largest[i] = largest[i+1];
            }

            // for(int i = 0; i < N; i++) {
            //     cout << i << ": ";
            //     cout << subSum[i] << " " << smallest[i] << " " << largest[i] << "\n";
            // }

            // cout << "\n";
            for(ll i = 0; i < N; i++) {
                ll currSum = subSum[i];
                // cout << currSum << " ";
                if(largest[i+1] > smallest[i]) {
                    currSum += largest[i+1] - smallest[i];
                    // cout << currSum << "\n"; 
                }


                if(res <= currSum) {
                    ans = reloads * (N + k) + (i + 1);
                    break;
                }
            }
        }
        cout << ans << "\n";

    }
    return 0;
}