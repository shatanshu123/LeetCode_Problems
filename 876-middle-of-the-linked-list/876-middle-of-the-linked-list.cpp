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
    ListNode* middleNode(ListNode* head) {
        ListNode *end=head;
        ListNode *mid=head;
        bool even =true;
        while(end->next){
            end=end->next;
            if(even)
                mid=mid->next;
            even=!even;
        }
        return mid;
    }
};


