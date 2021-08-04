// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem

// solution code
int beautifulDays(int i, int j, int k) {
    int result=0;
    int n=0;
    int reversed=0;

    for(int a=i;a<=j;a++){
        n=a;
        reversed=0;
        while(n>0){
            reversed=(10 * reversed)+(n%10);
            n = n/10;
        }
        if ((abs(a-reversed))%k==0){result++;}
    }
    return result;
}