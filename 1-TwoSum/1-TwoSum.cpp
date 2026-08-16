// Last updated: 16/08/2026, 21:52:15
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        for(int i=0; i<nums.size(); i++){
6            int remaining = target - nums[i];
7            nums[i];
8
9            if(mp.find(remaining)!=mp.end()){
10                return {mp[remaining],i};
11            }
12            mp[nums[i]]=i;
13        }
14        return{};
15    }
16};