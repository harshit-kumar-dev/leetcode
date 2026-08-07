// Last updated: 07/08/2026, 15:33:03
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        ListNode* last = head;
15        int length=1;
16        if(head==nullptr || head->next==nullptr){
17            return head;
18        }
19        while(last->next!=nullptr){
20            last=last->next;
21            length++;
22        }
23        k=k % length;
24        if(k==0){
25            return head;
26        }
27        
28        last->next=head;        //make Circular
29        ListNode* newLast = head;
30
31        for(int i=1; i<length-k; i++){
32            newLast=newLast->next;
33        }
34
35        // Break the circle
36        ListNode* newHead = newLast->next;
37        newLast->next=NULL;
38
39        return newHead;
40    }
41};