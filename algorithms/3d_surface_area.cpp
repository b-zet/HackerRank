// https://www.hackerrank.com/challenges/3d-surface-area/problem

// solution code
int surfaceArea(vector<vector<int>> A) {
    int x = A[0].size();
    int y = A.size();
    int cell = 0;
    int result = 0;
    vector<vector<int>> paddedA;

    // padding A with zeros
    vector<int> row;

    // 1st row filled with zeros
    for (int i=0;i<x+2;i++){
        row.push_back(0);
    }
    paddedA.push_back(row);

    // middle rows from A
    for(int j=0;j<y;j++){
        row.clear();
        row.push_back(0);
        for (int i=0;i<x;i++){
            row.push_back(A[j][i]);
        }
        row.push_back(0);
        paddedA.push_back(row);
    }

    // last row filled with zeros
    row.clear();
    for (int i=0;i<x+2;i++){
        row.push_back(0);
    }
    paddedA.push_back(row);

    // calculating 3d surface area
    for(int j=1;j<paddedA[0].size()-1;j++){
        for(int i=1;i<paddedA.size()-1;i++){
            cell = 0;
            if(paddedA[i][j]>paddedA[i][j+1]){
                cell = cell + paddedA[i][j] - paddedA[i][j+1];
            }
            if(paddedA[i][j]>paddedA[i+1][j]){
                cell = cell + paddedA[i][j] - paddedA[i+1][j];
            }
            if(paddedA[i][j]>paddedA[i-1][j]){
                cell = cell + paddedA[i][j] - paddedA[i-1][j];
            }
            if(paddedA[i][j]>paddedA[i][j-1]){
                cell = cell + paddedA[i][j] - paddedA[i][j-1];
            }
            result = result + cell + 2;
        }
    }
    return result;
}
