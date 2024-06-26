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
        if(!head)
            return head;
        ListNode* end=head;
        int length=1;
        while(end->next){
            end=end->next;
            length++;
        }
        end->next=head;
        length-=(k%length);
        while(length>0){
            end=end->next;
            head=head->next;
            length--;
        }
        end->next=nullptr;
        return head;
    }
};