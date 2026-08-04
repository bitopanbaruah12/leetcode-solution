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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {

            return head;
        }
        if(k==0){
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 0;
        while (temp != NULL) {
            prev = temp;
            temp = temp->next;
            count++;
        }
        if(k%count==0){
            return head;
        }
        int x = count - k % count;
       
        ListNode* stop = head;
        int i=1;
        while (i <x) {
            stop = stop->next;
            i++;
        }
        ListNode* link=stop->next;
        stop->next = NULL;
        prev->next = head;
        head = link;
        return head;
    }
};