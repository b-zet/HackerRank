//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include "string"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string n_string;
    int n_int;
    cin >> n_int;

    if (n_int==1){
        n_string = "one";
    }
    if (n_int==2){
        n_string = "two";
    }
    if (n_int==3){
        n_string = "three";
    }
    if (n_int==4){
        n_string = "four";
    }
    if (n_int==5){
        n_string = "five";
    }
    if (n_int==6){
        n_string = "six";
    }
    if (n_int==7){
        n_string = "seven";
    }
    if (n_int==8){
        n_string = "eight";
    }
    if (n_int==9){
        n_string = "nine";
    }
    if (n_int>9){
        n_string = "Greater than 9";
    }
    cout << n_string;

    return 0;
}
