#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int a = 0, b = nums.size() - 1;
    while (a <= b) {
        int i = (a + b) / 2;
        if (target == nums[i]) {
            return i;
        } else if (target > nums[i]) {
            a = i + 1;
        } else {
            b = i - 1;
        }
    }
    return a;
}


int main() {
    vector<int> test_nums1 = {1,3,5,6};
    int test_target1 = 5;
    cout << searchInsert(test_nums1, test_target1) << '\n';

    vector<int> test_nums2 = {1,3,5,6};
    int test_target2 = 2;
    cout << searchInsert(test_nums2, test_target2) << '\n';

    vector<int> test_nums3 = {1,3,5,6};
    int test_target3 = 7;
    cout << searchInsert(test_nums3, test_target3) << '\n';

    return 0;
}
