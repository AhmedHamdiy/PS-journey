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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int i=1, sz=0, p0=-1, p=-1, minD=INT_MAX;
                int x0=head->val, x1=head->next->val;
                        bool less=x1<x0, bigger=x1>x0;
                                for(ListNode* Next=head->next->next; Next; i++, Next=Next->next){
                                            int x=Next->val;
                                                        bool bigger1=x>x1, less1=x<x1;
                                                                    if((less && bigger1)||(bigger && less1)){
                                                                                    if (sz==0) p0=i;
                                                                                                    sz++;
                                                                                                                    if (p!=-1) minD=min(i-p, minD);
                                                                                                                                    p=i;
                                                                                                                                                }
                                                                                                                                                            bigger=bigger1;
                                                                                                                                                                        less=less1;
                                                                                                                                                                                    x1=x;
                                                                                                                                                                                            }
                                                                                                                                                                                                    if (sz<=1) return {-1, -1};
                                                                                                                                                                                                            else return {minD, p-p0};
    }
};