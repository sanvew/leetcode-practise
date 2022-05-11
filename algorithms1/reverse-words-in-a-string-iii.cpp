#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int l, int r) {
    while (l < r) {
        swap(s[l++], s[r--]);
    }
}

string reverseWords(string s) {
    int j = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            reverse(s, j, i - 1);
            j = i + 1;
        } else if (i == s.size() - 1) {
            reverse(s, j, i);
        }
    }
    return s;
}

int main() {
    string test_s1 = "Let's take LeetCode contest";
    string res1 = reverseWords(test_s1);
    cout << res1 << '\n';

    string test_s2 = "God Ding";
    string res2 = reverseWords(test_s2);
    cout << res2 << '\n';
}
