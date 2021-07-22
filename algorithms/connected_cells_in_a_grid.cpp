// https://www.hackerrank.com/challenges/connected-cell-in-a-grid/problem

// solution code
void crawler(vector<vector<int>> &matrix, int number, int row,int column){
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            if(matrix[row+i][column+j]==1){
                matrix[row+i][column+j]=number;
                crawler(matrix,number,row+i,column+j);
            }
        }
    }
}

int connectedCell(vector<vector<int>> matrix) {
    vector<vector<int>> paddedMatrix;
    int nCols = matrix[0].size();
    int nRows = matrix.size();
    int region=2;
    int result=0;
    int temp;

    //padding the matrix;
    vector<int> row;
    for (int i=0;i<nCols+2;i++){
        row.push_back(0);
    }
    paddedMatrix.push_back(row);

    for(int j=0;j<nRows;j++){
        row.clear();
        row.push_back(0);
        for (int i=0;i<nCols;i++){
            row.push_back(matrix[j][i]);
        }
        row.push_back(0);
        paddedMatrix.push_back(row);
    }
    row.clear();
    for (int i=0;i<nCols+2;i++){
        row.push_back(0);
    }
    paddedMatrix.push_back(row);

    // marking the regions
    for (int i=1;i<nRows+1;i++){
        for (int j=1;j<nCols+1;j++){
            if(paddedMatrix[i][j]==1){
                crawler(paddedMatrix,region,i,j);
                region++;
            }
        }
    }

    // finding the largest region
    for (int r=1;r<region;r++){
        temp = 0;
        for(int i=0;i<nRows+2;i++){
            for(int j=0;j<nCols+2;j++){
                if(paddedMatrix[i][j]==r){temp++;}
            }
        }
        if (temp>result) {result=temp;}
    }
    return result;
}