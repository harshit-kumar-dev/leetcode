// Last updated: 31/07/2026, 14:57:17
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int left = 0;
6        int maxLength = 0;
7
8        for (int right = 0; right < s.size(); right++) {
9            while (st.count(s[right])) {
10                st.erase(s[left]);
11                left++;
12            }
13            st.insert(s[right]);
14            maxLength = max(maxLength, right - left + 1);
15        }
16        return maxLength;
17    }
18};
19