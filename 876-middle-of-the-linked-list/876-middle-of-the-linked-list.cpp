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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* current=head;
        while(current!=NULL){
            len++;
            current=current->next;
        }
        ListNode* now=head;
        int mid=len/2;
        while(mid--){
            now=now->next;
        }
        return now;
    }
};