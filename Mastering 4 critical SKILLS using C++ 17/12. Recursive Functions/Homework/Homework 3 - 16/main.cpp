#include <iostream>

using namespace std;

int max(int a, int b, int c){
    return max(a, max(b, c));
}

static int res;
int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
{
    if ((ROWS == 0) && (COLS == 0))
        res += grid[0][0];
    if ((row == ROWS) && (col == COLS))
        return res;
    else
    {
        bool left = 1, right = 1, dio = 1; //dio: Cheo
        if (ROWS + 1 > row){ //Doc khong di duoc. Chi di theo hang.
            res += grid[ROWS][COLS + 1];
            return path_sum(grid, row, col, ROWS, COLS + 1);
        }
        else if (COLS + 1 > col){
            res += grid[ROWS + 1][COLS];
            return path_sum(grid, row, col, ROWS + 1, COLS);
        }
        else {
            int m = max(grid[ROWS][COLS + 1], grid[ROWS + 1][COLS + 1], grid[ROWS + 1][COLS]);
            res += m;
            if (grid[ROWS][COLS + 1] == m)
                return path_sum(grid, row, col, ROWS, COLS + 1);
            else if (grid[ROWS + 1][COLS + 1] == m)
                return path_sum(grid, row, col, ROWS + 1, COLS + 1);
            else
                return path_sum(grid, row, col, ROWS + 1, COLS);
        }
    }
}

int main()
{
    int a1[100][100] = {{1, 20, 8}, {2, 10, 11}, {20, 5, 9}};
    cout << path_sum(a1, 3, 3, 0, 0);
}
