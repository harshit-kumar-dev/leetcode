// Last updated: 12/08/2026, 15:06:54
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4            vector<int> x;
5            for(auto p:points){
6                x.push_back(p[0]);
7            } 
8            sort(x.begin(),x.end());
9            int ans=0;
10
11            for(int i=0; i<x.size()-1; i++){
12                ans = max(ans, x[i+1]-x[i]);
13            }
14            return ans;
15    }
16};