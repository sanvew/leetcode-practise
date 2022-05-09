#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
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
    return -1;
}


int main() {
    vector<int> test_nums1 = {-1,0,3,5,9,12};
    int test_target1 = 9;
    cout << search(test_nums1, test_target1) << '\n';

    vector<int> test_nums2 = {-1,0,3,5,9,12};
    int test_target2 = 2;
    cout << search(test_nums2, test_target2) << '\n';

    return 0;
}
