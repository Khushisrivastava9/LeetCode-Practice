/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* clonell=new Node(0);
        Node* temp=head;
        Node* clonehead=clonell;
        //make the clone ll with next  pointers as in original ll
        while(temp!=NULL){
            clonehead->next=new Node(temp->val);
            temp=temp->next;
            clonehead=clonehead->next;
        }
        //now let' also clone the random pointer so how to do this
        //create a map that maps node in original ll to the clonell
        unordered_map<Node*,Node*> mp;
        Node* originalnode=head;
        Node* clonenode=clonell->next;
        while(originalnode!=NULL && clonenode!=NULL){
            mp[originalnode]=clonenode;
            originalnode=originalnode->next;
            clonenode=clonenode->next;
        }
        
        //now copy the random pointer of original to clone
        originalnode=head;
        clonenode=clonell->next;
        while(originalnode!=NULL){
            clonenode->random=mp[originalnode->random];
            originalnode=originalnode->next;
            clonenode=clonenode->next;
        }
        return clonell->next;
    }
};