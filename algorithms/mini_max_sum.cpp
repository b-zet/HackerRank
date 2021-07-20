// https://www.hackerrank.com/challenges/mini-max-sum/problem

// solution code
void miniMaxSum(vector<int> arr) {
    long minValue = 0;
    long maxValue = 0;
    long sum = 0;

    for(int i=0;i<arr.size();i++) {
        sum = 0;

        for (int j = 0; j < arr.size(); j++) {
            sum = sum + arr[j];
        }
        sum = sum - arr[i];

        if (i==0){
            minValue=sum;
            maxValue=sum;
        }
        if (sum < minValue){
            minValue = sum;
        }
        if (sum > maxValue){
            maxValue = sum;
        }
    }
    cout << minValue << " " << maxValue << endl;
}