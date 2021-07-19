// https://www.hackerrank.com/challenges/diagonal-difference/problem

// solution code
int diagonalDifference(vector<vector<int>> arr) {
    int a = 0;
    int b = 0;
    for (int i=0;i<arr[0].size();i++){
        a = a + arr[i][i];
        b = b + arr[i][arr[0].size()-i-1];
    }
    return abs(a - b);
}
