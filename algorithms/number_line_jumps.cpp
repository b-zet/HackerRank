// https://www.hackerrank.com/challenges/kangaroo/problem

// solution code
string kangaroo(int x1, int v1, int x2, int v2) {
    float x{0.0};

    x = float(x2-x1) / float(v1-v2);
    if (round(x)-x == 0 && x>0) return "YES";

    return "NO";
}