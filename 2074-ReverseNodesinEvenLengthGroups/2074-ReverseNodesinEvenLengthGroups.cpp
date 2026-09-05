// Last updated: 05/09/2026, 23:00:25
1class Solution {
2public:
3    ListNode* reverseEvenLengthGroups(ListNode* head) {
4        ListNode* curr = head;
5        ListNode* prevGroupTail = nullptr;
6        int groupSize = 1;
7
8        while (curr != nullptr) {
9
10            ListNode* groupStart = curr;
11            int actualSize = 0;
12
13            // Find actual size of current group
14            while (curr != nullptr && actualSize < groupSize) {
15                curr = curr->next;
16                actualSize++;
17            }
18
19            ListNode* nextGroup = curr;
20
21            // Reverse only if actual group size is even
22            if (actualSize % 2 == 0) {
23
24                ListNode* prev = nextGroup;
25                ListNode* node = groupStart;
26
27                for (int i = 0; i < actualSize; i++) {
28                    ListNode* next = node->next;
29                    node->next = prev;
30                    prev = node;
31                    node = next;
32                }
33
34                // Connect previous group
35                if (prevGroupTail != nullptr) {
36                    prevGroupTail->next = prev;
37                } else {
38                    head = prev;
39                }
40
41                // Original start becomes tail after reversal
42                prevGroupTail = groupStart;
43            } 
44            else {
45                // Move tail to last node of current group
46                prevGroupTail = groupStart;
47
48                for (int i = 1; i < actualSize; i++) {
49                    prevGroupTail = prevGroupTail->next;
50                }
51            }
52
53            groupSize++;
54        }
55
56        return head;
57    }
58};