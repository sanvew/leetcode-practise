#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s[i++], s[j--]);
    }
}

int main() {
    vector<char> test_s1 = {'h','e','l','l','o'};
    reverseString(test_s1);
    cout << '[';
    for (auto i : test_s1) cout << i << ' ';
    cout << '\b' << ']' << '\n';

    vector<char> test_s2 = {'H','a','n','n','a','h'};
    reverseString(test_s2);
    cout << '[';
    for (auto i : test_s2) cout << i << ' ';
    cout << '\b' << ']' << '\n';
}
