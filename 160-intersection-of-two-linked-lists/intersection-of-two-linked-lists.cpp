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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> mp;
        while(headA && headB){
            mp[headA]++;
            mp[headB]++;
            if(mp[headA]==2) return headA;
            if(mp[headB]==2) return headB;
            headA=headA->next;
            headB=headB->next;
        }
        while(headA){
            mp[headA]++;
            if(mp[headA]==2) return headA;
            headA=headA->next;
        }
        while(headB){
            mp[headB]++;
            if(mp[headB]==2) return headB;
            headB=headB->next;
        }
        return NULL;
    }
};