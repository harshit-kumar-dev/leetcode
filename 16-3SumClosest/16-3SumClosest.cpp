// Last updated: 29/07/2026, 22:17:57
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        int min = INT_MAX ; 
5        int a = 0 ; 
6        for(int i = 0 ; i < nums.size()-2 ; i++){
7            for(int j = i+1 ; j < nums.size()-1 ; j++){
8                for(int k = j+1 ; k < nums.size() ; k++){
9                    if(abs(nums[i]+nums[j]+nums[k]-target)<min){
10                        min = abs(nums[i]+nums[j]+nums[k]-target) ; 
11                        a = nums[i]+nums[j]+nums[k] ; 
12                    }
13                }
14            }
15        }
16        return a ; 
17    }
18};