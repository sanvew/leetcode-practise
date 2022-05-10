#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0, j = numbers.size() - 1;
    while (numbers[i] + numbers[j] != target) {
        if (numbers[i] + numbers[j] > target) j--;
        else i++;
    }
    return {++i, ++j};
}

int main() {
    vector<int> res;

    vector<int> test_numbers1 = {2,7,11,15};
    int test_target1 = 9;
    res = twoSum(test_numbers1, test_target1);
    cout << '[';
    for (auto i : res) cout << i << ' ';
    cout << '\b' << ']' << '\n';

    vector<int> test_numbers2 = {2,3,4};
    int test_target2 = 6;
    res = twoSum(test_numbers2, test_target2);
    cout << '[';
    for (auto i : res) cout << i << ' ';
    cout << '\b' << ']' << '\n';

    vector<int> test_numbers3 = {-1,0};
    int test_target3 = -1;
    res = twoSum(test_numbers3, test_target3);
    cout << '[';
    for (auto i : res) cout << i << ' ';
    cout << '\b' << ']' << '\n';

    vector<int> test_numbers4 = {5,25,75};
    int test_target4 = 100;
    res = twoSum(test_numbers4, test_target4);
    cout << '[';
    for (auto i : res) cout << i << ' ';
    cout << '\b' << ']' << '\n';
}
