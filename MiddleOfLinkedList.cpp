/**
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
 * Memory Usage: 6.9 MB, less than 5.03% of C++ online submissions for Middle of the Linked List.
 *
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
    ListNode* middleNode(ListNode* head) 
    {
        // Add every node to a vector
        vector<ListNode*> nodeVector;
        ListNode* trav = head;
        while (trav != nullptr)
        {
            nodeVector.push_back(trav);
            trav = trav->next;
        }
        
        // Find index of middle list
        int index = nodeVector.size() / 2;

        // If empty, return nullptr
        if (nodeVector.size() == 0)
        {
            return nullptr;
        }
        else
        {
            return nodeVector[index];
        }
    }
};