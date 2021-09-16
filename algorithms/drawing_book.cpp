// https://www.hackerrank.com/challenges/drawing-book/problem

// solution code
int pageCount(int n, int p) {
    int left {0};
    int right {0};

    left = p/2;
    right = n/2 - p/2;

    if (left<right) return left;
    else return right;

}