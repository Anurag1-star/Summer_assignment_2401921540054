class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp!= NULL){
            size++;
            temp = temp->next;
        }
        temp = head;
        int newidx = size-n+1;
        if(newidx == 1){
            return head->next;
        }
        for(int i=1; i<newidx-1; i++){
            temp= temp->next;
        }
        temp->next = temp->next->next;
    return head;
    }
};