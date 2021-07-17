// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int numberOfCommas(string str) {
    int returnHowManyCommas = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',') returnHowManyCommas++;
    }
    return returnHowManyCommas;
}

vector<int> parseInts(string str) {
    vector<int> tempIntegers;
    stringstream ss(str);
    char ch;
    int tempNumber;

    for (int i=0;i<numberOfCommas(str)+1;i++) {
        ss >> tempNumber >> ch;
        tempIntegers.push_back(tempNumber);
    }
    return tempIntegers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}