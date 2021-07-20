// https://www.hackerrank.com/challenges/grading/problem

// solution code
vector<int> gradingStudents(vector<int> grades) {
    vector<int> finalGrades;

    for (int i=0;i<grades.size();i++){
        int grade = grades[i];

        if ((grade>37)&&(grade%5>2)){
            finalGrades.push_back(grade-(grade%5)+5);
        }

        if ((grade<38)||(grade%5<3)){
            finalGrades.push_back(grade);
        }
    }
    return finalGrades;
}