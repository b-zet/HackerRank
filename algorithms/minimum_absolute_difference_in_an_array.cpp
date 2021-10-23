// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

// solution code
int minimumAbsoluteDifference(vector<int> arr) {
    int result = abs(arr[1]-arr[0]);
    int temp{0};

    sort(begin(arr),end(arr));

    for(int i=0;i<arr.size();i++){
        temp = abs(arr[i+1]-arr[i]);
        if (temp<result) result = temp;
        if (result==0) return 0;
    }

    return result;
}