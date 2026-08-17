// Last updated: 17/08/2026, 15:14:32
1class Solution {
2public:
3    vector<string> findRepeatedDnaSequences(string s) {
4        unordered_map<string, int> mp;
5        vector<string> ans;
6        for(int i=0; i+10<=s.size(); i++){
7            string str = s.substr(i,10);
8            mp[str]++;
9            if(mp[str]==2){
10                ans.push_back(str);
11            }
12        }
13        return ans;
14    }
15};