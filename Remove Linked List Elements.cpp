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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return NULL;
        }
        while(head!=NULL && head->val == val){
            head = head->next;
        }
        ListNode *ref = head, *temp;
        while(ref!=NULL && ref->next!=NULL){
            if(ref->next->val == val){
                temp = ref->next;
                ref->next = temp->next;
                delete(temp);
            }
            else{
                ref = ref->next;   
            }
        }
        return head;
    }
};