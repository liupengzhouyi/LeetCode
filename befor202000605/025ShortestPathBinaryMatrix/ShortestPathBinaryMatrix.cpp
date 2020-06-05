//
// Created by 刘鹏 on 2020/2/9.
//

#include <queue>
#include "ShortestPathBinaryMatrix.h"

int ShortestPathBinaryMatrix::shortestPathBinaryMatrix(std::vector<std::vector<int>> &grid) {
    int ans = 0, path = 0;
    if (grid.size() == 1 && grid[0].size() == 1 && grid[0][0] == 0) return 1;
    if(grid.size() == 0 || grid[0].size() == 0) return 0;
    int row = grid.size(),col = grid[0].size();
    if(grid[0][0] == 1 || grid[row-1][col-1] == 1) return -1;
    std::queue<std::pair<int,int>> que;
    grid[0][0] = 1;
    que.push(std::make_pair(0,0));
    while(!que.empty()){
        int n = que.size();
        for(int i=0;i<n;i++){
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            for(int p=-1;p<=1;p++){
                for(int q=-1;q<=1;q++){
                    int tx = x + p;
                    int ty = y + q;
                    if (tx >= 0 && tx < row && ty >= 0 && ty < col && grid[tx][ty] == 0) {
                        grid[tx][ty] = 1;
                        que.push(std::make_pair(tx,ty));
                    }
                    if(tx==row-1 && ty==col-1) return path + 2;
                }
            }
        }
        path++;
    }
    return -1;
}
