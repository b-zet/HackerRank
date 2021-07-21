// https://www.hackerrank.com/challenges/utopian-tree/problem

// solution code
int utopianTree(int n) {
    int result=1;
    for (int i=0;i<(n-n%2)/2;i++){
        result=(result*2)+1;
    }
    if (n%2==1){
        result=result*2;
    }
    return result;
}