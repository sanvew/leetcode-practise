#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0;
    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] != 0) swap(nums[j], nums[i++]);
    }
}

int main() {
    vector<int> test_nums1 = {0,1,0,3,12};
    moveZeroes(test_nums1);
    cout << '[';
    for (auto i : test_nums1) cout << i << ' ';
    cout << '\b' << ']' << '\n';

    vector<int> test_nums2 = {0};
    moveZeroes(test_nums2);
    cout << '[';
    for (auto i : test_nums2) cout << i << ' ';
    cout << '\b' << ']' << '\n';
}
