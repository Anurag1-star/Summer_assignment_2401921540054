class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        bool flag = false;
        ListNode* temp= head;
        int i =0 ;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        temp= head;
        reverse(v.begin(),v.end());
        while(temp!=NULL){
            if(v[i]==temp->val){
            i++;
            temp = temp->next;
            continue;
                
            else{
            return false;
            
        }
    if(temp == NULL){
        flag = true;
    }
    return flag;
    }
};