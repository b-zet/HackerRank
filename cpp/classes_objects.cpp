// https://www.hackerrank.com/challenges/classes-objects/problem

#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
public:
    int scores[5];
    void input();
    int calculateTotalScore();

};

void Student::input(){
    cin >> Student::scores[0]>> Student::scores[1]>> Student::scores[2]>> Student::scores[3]>> Student::scores[4];
}


int Student::calculateTotalScore(){
    return Student::scores[0]+Student::scores[1]+Student::scores[2]+Student::scores[3]+Student::scores[4];
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}