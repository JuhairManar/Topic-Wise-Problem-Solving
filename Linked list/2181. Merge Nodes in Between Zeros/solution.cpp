// link - https://leetcode.com/problems/merge-nodes-in-between-zeros/

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
    ListNode* mergeNodes(ListNode* head) {
        long long s=0;
        head=head->next;
        while(head->val){
            s+=head->val;
            if(head->next->val==0){
                head->val=s;
                break;
            }
            head=head->next;
        }

        s=0;
        ListNode* prev=head;
        ListNode* t=head->next->next;

        while(t && t->val){
            s+=(t->val);
            if(t->next->val==0){
                t->val=s;
                s=0;
                prev->next=t;
                prev=prev->next;
                t=t->next->next;
            }
            else t=t->next;
        }
        prev->next=NULL;



        return head;
    }
};
