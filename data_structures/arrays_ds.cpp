// https://www.hackerrank.com/challenges/arrays-ds/problem

// solution code
vector<int> reverseArray(vector<int> a) {
    vector<int> result {};

    for (int i=a.size()-1;i>=0;i--) {
        result.push_back(a[i]);
    }

    return result;
}