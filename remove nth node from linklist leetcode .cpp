class Solution {
public:
    
    int solve(ListNode* head, int n){
        if(!head){
            return 0;
        }
        int cur=solve(head->next, n);
        if(cur==n){
            head->next=head->next->next;
        }
        return cur+1;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cur=solve(head, n);
        if(cur==n)
            head=head->next;
        return head;
    }
};
