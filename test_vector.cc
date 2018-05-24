#include<iostream>
#include<vector>
using namespace std;
class Solution;
int main()
{
      vector<vector<int>> cd(3);
      cd[0].emplace_back({1,3,1});
      cd[1].emplace_back({1,5,1});
      cd[2].emplace_back({4,2,1});
      cout << Solution.minPPathSum(cd) << endl;
       return 0;
}       
class Solution {
public:
  static  int minPathSum(vector<vector<int> >& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> c(n);
        vector<vector<int> >min_path(m,c) ;
        min_path[0][0] = grid[0][0];
        for(int row = 0 ; row < m ; ++row)
        {
            for(int col = 0; col < n ; ++col){
                if(row == 0 && col == 0)
                    continue;
                if (row == 0){
                    min_path[row][col] = min_path[row][col - 1] +  grid[row][col];
                    cout << min_path[row][col] << endl;
                    continue;
                }
                if (col == 0){
                    min_path[row][col] = min_path[row - 1][col] +  grid[row][col];

                    continue;
                }
                if(min_path[row-1][col] < min_path[row][col - 1])
                    min_path[row][col] = min_path[row - 1][col] +  grid[row][col];
                else
                    min_path[row][col] = min_path[row][col-1] +  grid[row][col];

            }
        }
        return min_path[m][n];
    }
};
