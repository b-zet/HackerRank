// ttps://www.hackerrank.com/challenges/chocolate-feast/problem

// solution code
int chocolateFeast(int n, int c, int m) {
    int result {n/c};
    int w {n/c};

    while(w >= m){
        result = result + w/m;
        w = w%m + w/m;
    }
    return result;
}