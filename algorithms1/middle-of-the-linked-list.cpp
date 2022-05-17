#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode* cur = head;
    ListNode* mid = head;
    int cnt = 1;
    while (cur->next != nullptr) {
        if (cnt % 2) {
            mid = mid->next;
        }
        ++cnt;
        cur = cur->next;
    }
    return mid;
}

void print_linked_list(ListNode* head) {
    ListNode* cur = head;
    cout << '[';
    while (cur->next != nullptr) {
        cout << cur->val << ',';
        cur = cur->next;
    }
    cout << '\b' << ']' << '\n';
}

void create_linked_list(ListNode* head, int max_val) {
    ListNode* tail = head;
    for (int i = 1; i <= max_val; ++i) {
        tail->val = i;
        ListNode* new_tail = new ListNode();
        tail->next = new_tail;
        tail = tail->next;
    }
}

int main() {
    ListNode test_head1;
    create_linked_list(&test_head1, 5);
    print_linked_list(&test_head1);
    ListNode* test_res1 = middleNode(&test_head1);
    print_linked_list(test_res1);

    ListNode test_head2;
    create_linked_list(&test_head2, 6);
    print_linked_list(&test_head2);
    ListNode* test_res2 = middleNode(&test_head2);
    print_linked_list(test_res2);
}
