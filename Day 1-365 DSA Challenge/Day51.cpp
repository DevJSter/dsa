// 19. Remove Nth Node From End of List
// Medium

// 18288

// 769

// Add to List

// Share
// Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

// Example 1:


// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]
 

// Constraints:

// The number of nodes in the list is sz.
// 1 <= sz <= 30
// 0 <= Node.val <= 100
// 1 <= n <= sz

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
  **/

//Approach-1 (2 Pass)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    
    int lengthLinkedList(ListNode* head) {
        int l = 0;
        
        while(head) {
            l++;
            head = head->next;
        }
        return l;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = lengthLinkedList(head);
        
        if(length == n) { //Length node form end means first node
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;
        int travel = length-n;
        
        while(travel--) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        
        delete(temp);   
        
        return head;
        
    }
};

//Approach-2 (1 Pass)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        for(int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        if(fast == NULL) {
            return head->next;
        }
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        return head;
    }
};