// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

// solution code
int minimumAbsoluteDifference(vector<int> arr) {
    int result = abs(arr[1]-arr[0]);
    int temp{0};

    for(int i=0;i<arr.size()-1;i++)
        for(int j=i+1;j<arr.size();j++) {
            temp = abs(arr[j]-arr[i]);
            if (temp<result) result = temp;
            if (result==0) return 0;
        }

    return result;
}