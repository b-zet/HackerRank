//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;

    cin  >> i >> l >> ch >> f >> d;

    cout << i << endl;
    cout << l << endl;
    cout << ch << endl;
    cout << setprecision(3) << fixed << f << endl;
    cout << setprecision(9) << fixed << d << endl;

    return 0;
}