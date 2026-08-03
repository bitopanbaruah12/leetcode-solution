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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* sum= new ListNode();
        ListNode* head=sum;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;

        while(temp1!=NULL || temp2!=NULL||carry){
              
              

               int total=carry;
               if (temp1 != NULL)
                total += temp1->val;

            if (temp2 != NULL)
                total += temp2->val;

               if(total>9){
                  carry=total/10;
                  total%=10;
                  sum->val=total;
                 
                  
                

               }
               else{
                   carry=0;
                   sum->val=total+carry;
                   

               }
               

              if(temp1!=NULL){

               temp1=temp1->next;
              }
              if(temp2!=NULL){
                
               temp2=temp2->next;
              }

              if(temp1!=NULL||temp2!=NULL||carry){
                sum->next=new ListNode();
                sum=sum->next;
              }

               




        }
        return head;
        
    }
};