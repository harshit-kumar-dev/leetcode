// Last updated: 23/08/2026, 23:01:49
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string ans = strs[0];
5        for(int i=0; i<strs.size(); i++){
6            while(strs[i].find(ans) != 0){
7                ans.pop_back();
8                if(ans.empty()){
9                    return "";
10                }
11            }
12        }
13        return ans;
14    }
15};