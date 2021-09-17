// https://www.hackerrank.com/challenges/sock-merchant/problem

// solution code
int sockMerchant(int n, vector<int> ar) {
    int result {0};
    int colors [101] {0};

    for(int i=0;i<n;i++){
        colors[ar[i]]++;
        if (colors[ar[i]]==2) {colors[ar[i]]=0;result++;}
    }
    return result;
}