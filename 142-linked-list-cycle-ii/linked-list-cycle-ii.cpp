/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,bool> vis;
        ListNode* curr=head;
        while(curr!=NULL){
            if(vis[curr]==true) return curr;
            vis[curr]=true;
            curr=curr->next;
        }
        return NULL;
    }
};