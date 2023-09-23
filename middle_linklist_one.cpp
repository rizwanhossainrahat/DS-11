
class Solution {
public:
    int size(ListNode* head)
    {
    ListNode* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
    }

    ListNode* middleNode(ListNode* head) {
        int n=size(head);
        ListNode* tmp=head;
        for(int i=0;i<n/2;i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};