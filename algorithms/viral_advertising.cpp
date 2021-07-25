// https://www.hackerrank.com/challenges/strange-advertising/problem

// solution code
int viralAdvertising(int n) {
    int result=2;
    int aktywnych=2;

    for(int i=0;i<n-1;i++){
        aktywnych=(aktywnych*3)/2;
        result=result+aktywnych;
    }
    return result;
}