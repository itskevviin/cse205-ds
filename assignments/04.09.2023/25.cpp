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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: Convert the linked list to a vector
        std::vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr) {
            nodes.push_back(curr);
            curr = curr->next;
        }
        
        int n = nodes.size();
        
        // Step 2: Reverse each group of k elements within the vector
        for (int i = 0; i + k <= n; i += k) {
            int left = i;
            int right = i + k - 1;
            while (left < right) {
                std::swap(nodes[left], nodes[right]);
                left++;
                right--;
            }
        }
        
        // Step 3: Reconstruct the linked list from the reversed vector
        for (int i = 0; i < n - 1; i++) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes[n - 1]->next = nullptr;
        
        return nodes[0];
    }
};