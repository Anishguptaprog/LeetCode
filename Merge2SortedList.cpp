https://leetcode.com/problems/merge-two-sorted-lists/submissions/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans, *temp;
        ans = new ListNode();
        temp = ans;
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        
        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;   
            }
            temp = temp->next;
        }
        
        
        if(list1) temp->next = list1;
        if(list2) temp->next = list2;
        
        return ans->next;
    }
};
