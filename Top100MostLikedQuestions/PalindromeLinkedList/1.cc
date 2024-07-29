#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        int get_size(ListNode *head)
        {
            ListNode *s = head;
            int size = 0;
            while (s)
            {
                ++size;
                s = s->next;
            }
            return size;
        }

        ListNode *reverseList(ListNode *head)
        {
            ListNode *prev = nullptr;
            ListNode *current = head;
            ListNode *next = nullptr;
            while (current != nullptr)
            {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            return prev;
        }
        bool isPalindrome(ListNode *head) {
            if (!head) return true;

            ListNode *r_ptr = head;
            int size = get_size(head);
            int i = 0;

            while (i < size / 2){
                r_ptr = r_ptr->next;
                ++i;
            }
            if (size % 2 != 0)
                r_ptr = r_ptr->next;

            ListNode *reverse_list = reverseList(r_ptr);

            while(reverse_list && head) {
                if(head->val != reverse_list->val) return false;
                head = head->next;
                reverse_list = reverse_list->next;
            }
            return true;
        }
};

int main()
{
    // Creamos una lista enlazada: 1 -> 2 -> 2 -> 1
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    Solution solution;

    // Probamos si la lista es un palíndromo
    if (solution.isPalindrome(head))
    {
        cout << "La lista es un palíndromo." << endl;
    }
    else
    {
        cout << "La lista no es un palíndromo." << endl;
    }

    // Liberamos la memoria de la lista enlazada
    while (head != nullptr)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
