//https://leetcode.com/problems/detect-cycles-in-2d-grid/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
	int dr[4] { -1, 0, 1, 0 };
	int dc[4] { 0, 1, 0, -1 };

	bool is_cycle;

public:
	int isvalid(int r, int c, vector<vector<char>> &grid) {
		if (r < 0 || r >= (int) grid.size())
			return false;
		if (c < 0 || c >= (int) grid[0].size())
			return false;
		return true;
	}

	void dfs(int r, int c, vector<vector<char>> &grid, vector<vector<bool>> &visited, char oldColor, int par_r = -1, int par_c = -1) {
		if (!isvalid(r, c, grid) || grid[r][c] != oldColor || is_cycle)
			return;

		if (visited[r][c]) {	// Now, a visit = cycle
			is_cycle = true;
			return;
		}

		visited[r][c] = 1;
		for (int d = 0; d < 4; ++d) {
			int nr = r+ dr[d], nc = c + dc[d];

			if(nr == par_r && nc == par_c)
				continue;	// Don't go back to your parent (fake cycle from undirected edge)
			dfs(nr, nc, grid, visited, oldColor, r, c);
		}
	}

	bool containsCycle(vector<vector<char>> &grid) {
		vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size()));
		int rows = grid.size(), cols = grid[0].size();

		for (int r = 0; r < rows; ++r) {
			for (int c = 0; c < cols; ++c) {
				if (!visited[r][c]) {	// New CC
					is_cycle = false;
					dfs(r, c, grid, visited, grid[r][c]);
					if (is_cycle)
						return true;
				}
			}
		}
		return false;
	}
};

int main()
{
   vector<vector<char>> v {{'f','a','a','c','b'},{'e','a','a','e','c'},{'c','f','b','b','b'},{'c','e','a','b','e'},{'f','e','f','b','f'}};
   Solution s;
   if (s.containsCycle(v))
        cout << "True";
   else
    cout << "false";
}
