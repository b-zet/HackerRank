// https://www.hackerrank.com/challenges/save-the-prisoner/problem

// solution code
int saveThePrisoner(int n, int m, int s) {
    int result=(s+m-2)%n+1;
    return result;
}