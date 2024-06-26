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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp=head;
        ListNode*dummy=new ListNode (-1);
        ListNode*ans=dummy;
        while(temp!=NULL){
            if(temp->val<x){
                dummy->next=new ListNode(temp->val);
                dummy=dummy->next;
            }
            temp=temp->next;
        }   
            temp=head;
            while(temp!=NULL){
            if(temp->val>=x){
                dummy->next=new ListNode(temp->val);
                dummy=dummy->next;
            }
            temp=temp->next;

            }
        return ans->next;
    }
};