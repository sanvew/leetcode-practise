#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    int l1 = 0, r1 = nums.size() - k - 1;
    int l2 = nums.size() - k, r2 = nums.size() - 1;
    int l = 0, r = nums.size() - 1;
    while (r1 - l1 > 0) swap(nums[l1++], nums[r1--]);
    while (r2 - l2 > 0) swap(nums[l2++], nums[r2--]);
    while (r -l > 0) swap(nums[l++], nums[r--]);
}

int main() {
    vector<int> test_nums1 = {1,2,3,4,5,6,7};
    int test_k1 = 3;
    rotate(test_nums1, test_k1);
    cout << '[';
    for (auto i : test_nums1) cout << i << ' ';
    cout << '\b' << ']' << '\n';

    vector<int> test_nums2 = {-1,-100,3,99};
    int test_k2 = 2;
    rotate(test_nums2, test_k2);
    cout << '[';
    for (auto i : test_nums2) cout << i << ' ';
    cout << '\b' << ']' << '\n';
}
