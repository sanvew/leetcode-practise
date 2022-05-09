#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> res(nums.size());
    int l = 0, r = nums.size() - 1;
    for (int i = r; i >= 0; --i) {
        if (abs(nums[l]) > abs(nums[r])) {
            res[i] = nums[l] * nums[l];
            ++l;
        } else {
            res[i] = nums[r] * nums[r];
            --r;
        }
    }
    return res;
}

int main() {
    vector<int> test_target1 = {-4,-1,0,3,10};
    cout << '[';
    for (auto i : sortedSquares(test_target1)) {
        cout << i << ' ';
    }
    cout << ']' << '\n';

    vector<int> test_target2 = {-7,-3,2,3,11};
    cout << '[';
    for (auto i : sortedSquares(test_target2)) {
        cout << i << ' ';
    }
    cout << ']' << '\n';
}
