#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k; // k = 1 always

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int p;
        cin >> p;
        p--; // convert to 0-based index

        int x = a[p];

        int L = 0, R = 0;

        // Count segments on LEFT
        for (int i = 0; i < p; ) {
            if (a[i] != x) {
                L++;
                while (i < p && a[i] != x) i++;
            } else {
                i++;
            }
        }

        // Count segments on RIGHT
        for (int i = p + 1; i < n; ) {
            if (a[i] != x) {
                R++;
                while (i < n && a[i] != x) i++;
            } else {
                i++;
            }
        }

        cout << 2 * max(L, R) << '\n';
    }

    return 0;
}