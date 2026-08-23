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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next ==NULL) return NULL;
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode*prev=head;
        for(int i=0;i<(count/2 )-1;i++){
            prev=prev->next;
        }
        temp=prev->next;
        
        prev->next=prev->next->next;
        delete temp;
        return head;
    }
};