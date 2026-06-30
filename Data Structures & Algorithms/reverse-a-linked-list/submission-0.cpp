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
    ListNode* reverseList(ListNode* head) {
         vector<int>v;
         
           ListNode* temp=head;
           while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
           } 
           reverse(v.begin(),v.end());
           ListNode* cur=head;
           int i=0;
           while(cur!=NULL){
            cur->val=v[i];
            i++;
             cur = cur->next;
           }
           return  head;
    }
};
