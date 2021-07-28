// https://www.hackerrank.com/challenges/sherlock-and-squares/problem

// solution code
int squares(int a, int b) {
    int minA=ceil(sqrt(a));
    int minB=floor(sqrt(b));

    return minB-minA+1;
}