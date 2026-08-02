/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        ListNode* temp = head;
        int n = 0;
        while (temp != NULL) {

            temp = temp->next;
            n++;
        }
        if (n == 1) {
        
            return NULL;
        }

        if (n == 2) {
            delete (head->next);
            head->next=NULL;
            return head;
        }
        temp = head;
        int i = 0;
        while (i < n / 2 - 1) {
            temp = temp->next;
            i++;
        }
        ListNode* del = temp->next;
        temp->next = del->next;
        delete (del);

        return head;
    }
};