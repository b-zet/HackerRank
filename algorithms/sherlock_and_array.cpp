// https://www.hackerrank.com/challenges/sherlock-and-array/problem

// solution code
string balancedSums(vector<int> arr) {
    int sum=0;
    int left=0;
    int right=0;
    for(int i=0;i<arr.size();i++){
        sum = sum+arr[i];
    }
    for(int i=0;i<arr.size();i++){
        right=sum-left-arr[i];
        if(left==right){
            cout << sum-left<<endl;
            cout << arr[i]<<endl;
            return "YES";
        }
        left=left+arr[i];
    }
    return "NO";
}