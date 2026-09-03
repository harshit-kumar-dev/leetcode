// Last updated: 03/09/2026, 11:15:00
1class Solution {
2public:
3    int mySqrt(int x) {
4        long long left = 0;
5        long long right = x;
6        long long ans = 0;
7        
8        while(left<=right){
9            long long mid = left + (right-left)/2;
10            long long sq = mid*mid;
11
12            if(x==1){
13                return 1;
14            }
15            if(sq == x){
16                return mid;
17            }
18            else if(sq > x){
19                right = mid-1;
20            }
21            else{
22                left = mid+1;
23                ans = mid;          //if approx comes
24            }
25        }
26        return ans;
27    }
28};