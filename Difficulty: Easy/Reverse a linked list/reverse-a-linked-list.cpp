/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt;
        while(curr != NULL){
            // store the next address or pointer in next
            nxt = curr->next;
            // reverse the next pointer of the node
            curr->next = prev;
            // update 
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
};