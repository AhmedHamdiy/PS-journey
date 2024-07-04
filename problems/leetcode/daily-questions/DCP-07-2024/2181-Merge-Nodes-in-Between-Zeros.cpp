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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode* prev=head;
        ListNode* cur=head;
        while(cur){
            while(cur->val!=0){
                sum+=cur->val;
                cur=cur->next;
            }
            prev->val=sum;
            sum=0;
            prev->next=cur->next;
            prev=prev->next;
            cur=cur->next;
        }
        return head->next;
    }
};