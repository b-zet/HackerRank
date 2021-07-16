// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nRows, nQuestions, nColumns, input, input2;
    vector<vector<int>> data, question;

    // reading first row (number of rows and number of queries/questions)
    cin >> nRows >> nQuestions;

    // reading data without first column
    for (int i=0;i<nRows;i++) {
        cin >> nColumns;
        data.push_back(vector<int>());
        for (int j = 0; j < nColumns; j++) {
            cin >> input;
            data[i].push_back(input);
        }
    }

    // reading questions
    for (int i=0;i<nQuestions;i++) {
        question.push_back(vector<int>());
        cin >> input >> input2;
        question[i].push_back(input);
        question[i].push_back(input2);
    }

    // printing answers
    for (int i=0;i<nQuestions;i++) {
        cout << data[question[i][0]][question[i][1]] << endl;
    }
    return 0;
}