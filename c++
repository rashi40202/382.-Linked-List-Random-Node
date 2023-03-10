Given a singly linked list, return a random node's value from the linked list. Each node must have the same probability of being chosen.

Implement the Solution class:

Solution(ListNode head) Initializes the object with the head of the singly-linked list head.
int getRandom() Chooses a node randomly from the list and returns its value. All the nodes of the list should be equally likely to be chosen.

****************************************************************************************************************************************************

class Solution {
private:
    ListNode* head;
public:
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int count = 0, result;
        ListNode* curr = head;
        while (curr) {
            count++;
            if (rand() % count == 0) {
                result = curr->val;
            }
            curr = curr->next;
        }
        return result;
    }
};
