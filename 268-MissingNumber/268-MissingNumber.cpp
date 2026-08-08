// Last updated: 08/08/2026, 11:02:13
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int expectedSum = n*(n+1)/2;
6
7        int actualSum = 0;
8        for(int i=0; i<nums.size(); i++){
9            actualSum += nums[i];
10        }
11        return expectedSum - actualSum;
12    }
13};