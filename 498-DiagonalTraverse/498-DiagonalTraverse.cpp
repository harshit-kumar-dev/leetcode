// Last updated: 29/08/2026, 23:38:20
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4
5        int m = mat.size();
6        int n = mat[0].size();
7
8        vector<int> ans;
9
10        int row = 0, col = 0;
11
12        for (int k = 0; k < m * n; k++) {
13
14            ans.push_back(mat[row][col]);
15
16            if ((row + col) % 2 == 0) {
17                // Move up-right
18                if (col == n - 1)
19                    row++;
20                else if (row == 0)
21                    col++;
22                else {
23                    row--;
24                    col++;
25                }
26            }
27            else {
28                // Move down-left
29                if (row == m - 1)
30                    col++;
31                else if (col == 0)
32                    row++;
33                else {
34                    row++;
35                    col--;
36                }
37            }
38        }
39
40        return ans;
41    }
42};