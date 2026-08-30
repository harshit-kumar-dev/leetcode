// Last updated: 30/08/2026, 19:59:42
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* fast = head;
13        ListNode* slow = head;
14
15        while(fast!=nullptr && fast->next!=nullptr){
16            fast=fast->next->next;
17            slow=slow->next;
18
19            if(fast==slow){
20                slow = head;
21                while(slow!=fast){
22                    slow = slow->next;
23                    fast = fast->next;
24                }
25            return slow;
26            }
27        }
28        return nullptr;
29    }
30};