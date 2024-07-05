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
        vector<int> cpoints;
        int cnt=1;
        ListNode* temp=head->next;
        ListNode* prev=head;
        while(temp->next!=NULL){
            if(temp->val>prev->val && temp->val>temp->next->val){
                cpoints.push_back(cnt);
            }
            if(temp->val<prev->val && temp->val<temp->next->val){
                cpoints.push_back(cnt);
            }
            cnt++;
            temp=temp->next;
            prev=prev->next;
        }
        if(cpoints.size()<2) return {-1,-1};
        sort(begin(cpoints),end(cpoints));
        int n=cpoints.size();
        int mini=cpoints[n-1]-cpoints[0];
        for(int i=0;i<n-1;i++){
            mini=min(mini,cpoints[i+1]-cpoints[i]);
        }
        return {mini,cpoints[n-1]-cpoints[0]};


    }
};