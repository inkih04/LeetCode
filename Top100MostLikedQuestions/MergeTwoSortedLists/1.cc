#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode();
        ListNode* first = list;
        while(list1 != nullptr && list2!= nullptr) {
            if (list1->val <= list2->val) {
                list->next = list1;
                list = list->next;
                list1 = list1->next;
            }
            else {
                list->next = list2;
                list = list->next;
                list2 = list2->next;
            }
        }
        if (!list1) list->next = list2;
        else list->next = list1;
        return first->next;
}
