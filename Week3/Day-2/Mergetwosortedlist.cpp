class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(0);
        ListNode* current = list3;
        while(list1 != NULL && list2 != NULL){
            if(list1->val >= list2->val){
                current->next = new ListNode(list2->val);
                current =current->next;
                list2 = list2->next;
            }
            else{
                current->next = new ListNode(list1->val);
                current =current->next;
                list1 = list1->next;
            }
        }
        while(list1!=NULL){
            current->next = new ListNode(list1->val);
            current =current->next;
            list1 = list1->next;
        }
        while(list2!=NULL){
            current->next = new ListNode(list2->val);
            current = current->next;
            list2  = list2->next;
        }
        return list3->next;
    }
};