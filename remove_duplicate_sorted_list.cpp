
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* tmp=head;
        while(tmp->next!=NULL)
        {
           ListNode* deleteNode=tmp->next;
                tmp->next=tmp->next->next;
                delete deleteNode;
            if(tmp->next==NULL)break;
            else if(tmp->val!=tmp->next->val)
            {
                tmp=tmp->next;
            }
        } 
        return head;
    }
};