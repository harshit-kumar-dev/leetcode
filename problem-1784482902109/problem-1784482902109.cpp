// Last updated: 19/07/2026, 23:11:42
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int count = 0;
5        int maxVowels = 0;
6        for(int i=0; i<k; i++){
7            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' 
8                || s[i] == 'o' || s[i] == 'u'){
9                count++;
10            }
11        }
12            maxVowels = count;
13
14            for(int i=k; i<s.length(); i++){
15                char leftChar = s[i-k];
16                if(leftChar == 'a' || leftChar == 'e' || leftChar == 'i' || leftChar == 'o' || leftChar == 'u'){
17                    count--;
18                }
19
20                char rightChar = s[i];
21                if(rightChar == 'a' || rightChar == 'e' || rightChar == 'i' || rightChar == 'o' || rightChar == 'u'){
22                    count++;
23                }
24                maxVowels = max(maxVowels,count);
25            }
26        return maxVowels;
27    }
28};