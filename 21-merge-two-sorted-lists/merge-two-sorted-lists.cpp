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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* nl=new ListNode(0);
        ListNode* head=nl;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                nl->next=new ListNode(list1->val);
                nl=nl->next;
                list1=list1->next;
            }
            else{
                nl->next=new ListNode(list2->val);
                nl=nl->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            nl->next=new ListNode(list1->val);
            nl=nl->next;
            list1=list1->next;
        }
        while(list2!=NULL){
            nl->next=new ListNode(list2->val);
            nl=nl->next;
            list2=list2->next;
        }
        return head->next;
    }
};