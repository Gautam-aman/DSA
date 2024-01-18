class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == NULL || head->next==NULL) return NULL;
        ListNode *fast = head , *slow= head , *curr= NULL;
        while (fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            curr = slow ; 
            slow = slow->next;
        }
        curr->next = slow->next ;
        curr = slow; 
        delete slow;
    return head ;
    }
};