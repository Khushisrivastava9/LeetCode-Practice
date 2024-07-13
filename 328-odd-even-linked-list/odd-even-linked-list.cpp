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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* newll=new ListNode(0);
        ListNode* ll=newll;
        int cnt=0;
        ListNode* temp=head;
        ListNode* curr=head;
        while(temp){
            if(cnt%2==0){
                newll->next=new ListNode(temp->val);
                newll=newll->next;
            }
            cnt++;
            temp=temp->next;
        }
        cnt=0;
       
        while(curr){
            if(cnt%2!=0){
                newll->next=new ListNode(curr->val);
                newll=newll->next;
            }
            cnt++;
            curr=curr->next;
        }
        return ll->next;
    }
};