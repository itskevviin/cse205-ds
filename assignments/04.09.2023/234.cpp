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
// private:
// ListNode* vtoll(vector<int> v){
//     if(v.size()==0){
//         return nullptr;
//     }
//     ListNode* head=new ListNode(v[0]);
//     ListNode* temp=head;
//     for(int i=1;i<v.size();i++){
//         temp->next=new ListNode(v[i]);
//         temp=temp->next;
//     }
//     return head;

// }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        ListNode* cur=head;
        vector<int> v;
        while(cur!=NULL){
            v.push_back(cur->val);
            cur=cur->next;
        }
        int n=v.size();
        int x=v.size()/2;
        for(int i=0;i<x;i++){
            if(v[i]!=v[n-1-i]){
                return false;
            }
        }
        return true;

    }
};