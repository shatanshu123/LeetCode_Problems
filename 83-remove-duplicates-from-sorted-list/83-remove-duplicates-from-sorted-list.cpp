/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * STRIVER_SDE_SHEET
 */
class Solution {
public:
   ListNode* deleteDuplicates(ListNode* head) {

 if(head==nullptr || head->next==nullptr){
     return head;
 }

 
 ListNode*ptr=head;
 while(ptr->next!=nullptr){
     
     if(ptr->val==ptr->next->val){
         ptr->next=ptr->next->next;
     }else{
         ptr=ptr->next;
     }
 }
 
 return head;
}
};