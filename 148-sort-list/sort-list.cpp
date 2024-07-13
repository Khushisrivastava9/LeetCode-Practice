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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(begin(v),end(v));
        ListNode* curr=head;
        for(int i=0;i<v.size();i++){
            curr->val=v[i];
            curr=curr->next;
        }
        return head;
    }
};