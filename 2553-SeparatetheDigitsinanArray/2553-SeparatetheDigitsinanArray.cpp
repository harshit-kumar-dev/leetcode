// Last updated: 06/08/2026, 00:56:59
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4// Method-1
5        // vector<int> ans;
6        // for(int i=0; i<nums.size(); i++){
7        //     string temp = to_string(nums[i]);
8        //     for(int j=0; j<temp.size(); j++){
9        //         ans.push_back(temp[j]-'0');
10        //     }
11        // }
12        // return ans;
13
14// Method-2
15        vector<int> ans;
16        for(int i=0; i<nums.size(); i++){
17            vector<int> rev;
18            int temp = nums[i];
19
20            while(temp>0){
21                int digit = temp%10;
22                rev.push_back(digit);
23                temp/=10;
24            }
25            reverse(rev.begin(),rev.end());
26            for(int digit:rev){
27                ans.push_back(digit);
28            }
29        }
30        return ans;
31    }
32};