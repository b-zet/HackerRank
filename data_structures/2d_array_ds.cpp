// https://www.hackerrank.com/challenges/2d-array/problem


// solution code
int hourglassSum(vector<vector<int>> arr) {
    int result=-63;
    int temp=0;

    for(int i=0;i<arr.size()-2;i++)
        for(int j=1;j<arr[0].size()-1;j++) {
            temp=arr[i][j-1]+arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j-1]+arr[i+2][j]+arr[i+2][j+1];
            if(temp>result) result=temp;
        }

    return result;
}