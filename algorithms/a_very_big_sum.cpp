// https://www.hackerrank.com/challenges/a-very-big-sum/problem

// solution code
long aVeryBigSum(vector<long> ar) {
    long sum=0;

    for (int i=0;i<ar.size();i++){
        sum = sum + ar[i];
    }
    return sum;
}