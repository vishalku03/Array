#include<bits/stdc++.h>
// 1572 leetcode 
using namespace std;
class Solution
{
public:
     int diagonalSum(vector<vector<int>> &mat)
     {
          int n = mat.size(), ans = 0;
          for (int i = 0; i < n; i++)
               ans += (mat[i][i] + mat[i][n - i - 1]);
          return n % 2 == 1 ? ans - mat[n / 2][n / 2] : ans;
     }
};