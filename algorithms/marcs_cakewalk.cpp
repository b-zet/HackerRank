// https://www.hackerrank.com/challenges/marcs-cakewalk/problem

// solution code
long marcsCakewalk(vector<int> calorie) {
    long result{0};
    sort(calorie.begin(),calorie.end());
    reverse(calorie.begin(),calorie.end());

    for (int i=0;i<calorie.size();i++) result += calorie[i] * pow(2,i);

    return result;
}