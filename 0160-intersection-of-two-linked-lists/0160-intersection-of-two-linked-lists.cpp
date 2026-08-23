/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int length(ListNode*a){
        int count=0;
        while(a!=NULL){
            a=a->next;
            count++;
        }
        return count;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=length(headA);
        int len2=length(headB);
        ListNode*a=headA;
        ListNode*b=headB;
        if(len1>len2){
            for(int i=0;i<len1-len2;i++){
                a=a->next;
            }
        }
        else{
            for(int i=0;i<len2-len1;i++){
                b=b->next;
            }
        }
        while(a&&b){
            if(a==b){
                return a;
            }
            a=a->next;
            b=b->next;
        }
        return NULL;
    }
};