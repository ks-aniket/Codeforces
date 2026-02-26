#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int T;
    cin >> T;

    while(T--) {
        ll X;
        cin >> X;

        vector<int> nums;
        // max heap by default
        make_heap(nums.begin(), nums.end());

        ll X_copy = X;
        int sum = 0;
        int len = 0;
        nums.push_back(1);
        push_heap(nums.begin(), nums.end());
        sum += 1;
        while(X_copy/10) {
            int res = X_copy % 10;
            if((sum + res) < 10) {
                sum += res;
                nums.push_back(res);
                push_heap(nums.begin(), nums.end());
            } else {
                // get max element
                if(nums[0] > res) {
                    // pop nums[0], and insert res
                    sum -= nums[0];
                    
                    pop_heap(nums.begin(), nums.end());
                    nums.pop_back();

                    nums.push_back(res);
                    push_heap(nums.begin(), nums.end());
                    sum += res;
                }
            }

            X_copy /= 10;

            len++;
        }

        len++;
        int ans;
        // answer with 1 as the leading digit
        // cout << X << ": " << sum << " " << len << " " << nums.size() << " " << nums[0] << "\n";
        if((sum - 1 + X_copy) < 10) {
            // no need to replace the first digit
            ans = (len - nums.size());
        } else {
            ans = (len - nums.size() + 1);
        }

        cout << ans << "\n";
        
    }
    return 0;
}