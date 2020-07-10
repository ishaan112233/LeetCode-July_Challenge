/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* temp) {
        if(temp == NULL){
            return NULL;
        }
        Node *head = temp;
        stack<Node*>st;
        while(temp!=NULL){
            if(temp->child!=NULL){
                if(temp->next!=NULL){
                    st.push(temp->next);
                }
                temp->next = temp->child;
                temp->next->prev = temp;
                temp->child = NULL;
            }
            else if(temp->next == NULL && !st.empty()){
                temp->next = st.top(); st.pop();
                temp->next->prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};