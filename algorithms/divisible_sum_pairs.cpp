// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

// solution code
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int sum=0;
    for (int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if ((j>i)&&(ar[i]+ar[j])%k==0){
                sum++;
            }
        }
    }
    return sum;
}