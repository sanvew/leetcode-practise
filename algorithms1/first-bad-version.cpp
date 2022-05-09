// don't run it local
#include <bits/stdc++.h>
using namespace std;

int firstBadVersion(int n) {
    int a = 1, b = n;
    while (a != b) {
        int i = a + (b - a) / 2;
        if (isBadVersion(i)) {
            b = i;
        } else {
            a = i + 1;
        }
    }
    return a;
}

int main() {
}
