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
        ListNode* newll=new ListNode(0);
        ListNode* ll=newll;
        ListNode* temp=head;
        int sum=0;
        while(temp){
            sum+=temp->val;
            if(temp->val==0){
                ll->next=new ListNode(sum);
                ll=ll->next;
                sum=0;
            }
            temp=temp->next;

        }
        return newll->next->next;
    }
};