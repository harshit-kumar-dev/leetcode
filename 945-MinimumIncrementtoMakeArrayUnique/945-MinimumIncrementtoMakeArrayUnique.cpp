// Last updated: 17/08/2026, 15:00:58
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int move = 0;
6
7        for(int i=1; i<nums.size(); i++){
8            if(nums[i]<=nums[i-1]){
9                while(nums[i]<=nums[i-1]){
10                    nums[i]++;
11                    move++;
12                }
13            }
14        }
15        return move;
16    }
17};