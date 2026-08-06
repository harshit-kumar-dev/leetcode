// Last updated: 06/08/2026, 15:42:29
1class Solution {
2public:
3    string countAndSay(int n) {
4
5        string ans = "1";
6        // Generate next term n-1 times
7        for (int i = 1; i < n; i++) {
8            string temp = "";
9            // Traverse current string
10            for (int j = 0; j < ans.size(); ) {
11                int count = 0;
12                char ch = ans[j];
13
14                // Count same consecutive characters
15                while (ans[j] == ch) {
16                    count++;
17                    j++;
18                }
19
20                temp += to_string(count); 
21                temp += ch;
22            }
23
24            ans = temp;
25        }
26
27        return ans;
28    }
29};