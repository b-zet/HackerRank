// https://www.hackerrank.com/challenges/cavity-map/problem

// solution code
vector<string> cavityMap(vector<string> grid) {
    vector<string> result {grid};

    for (int row=1;row<grid.size()-1;row++){
        for(int col=1;col<grid[0].size()-1;col++){
            if((grid[row][col]>grid[row][col-1])&&(grid[row][col]>grid[row][col+1])&&(grid[row][col]>grid[row-1][col])&&(grid[row][col]>grid[row+1][col])) result[row][col]='X';
        }
    }

    return result;
}
