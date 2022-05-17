#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) fast = fast->next;
        if (!fast) return head->next;
        while (fast->next) fast = fast->next, slow = slow->next;
        slow->next = slow->next->next;
        return head;
}

void print_linked_list(ListNode* head) {
    ListNode* cur = head;
    cout << '[' << ' ';
    while (cur != nullptr) {
        cout << cur->val << ',';
        cur = cur->next;
    }
    cout << '\b' << ' ' << ']' << '\n';
}

ListNode* create_linked_list(int max_val) {
    ListNode* head = new ListNode(1);
    ListNode* tail = head;
    for (int i = 2; i <= max_val; ++i) {
        tail->next = new ListNode(i);
        tail = tail->next;
    }
    return head;
}

int main() {
    ListNode* test_head1 = create_linked_list(5);
    print_linked_list(test_head1);
    ListNode* test_res1 = removeNthFromEnd(test_head1, 2);
    print_linked_list(test_res1);

    ListNode* test_head2 = create_linked_list(1);
    print_linked_list(test_head2);
    ListNode* test_res2 = removeNthFromEnd(test_head2, 1);
    print_linked_list(test_res2);

    ListNode* test_head3 = create_linked_list(2);
    print_linked_list(test_head3);
    ListNode* test_res3 = removeNthFromEnd(test_head3, 1);
    print_linked_list(test_res3);
}
