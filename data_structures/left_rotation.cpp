// https://www.hackerrank.com/challenges/array-left-rotation/problem

// solution code
vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> result;

    for (int i=d;i<arr.size();i++){
        result.push_back(arr[i]);
    }
    for (int i=0;i<d;i++){
        result.push_back(arr[i]);
    }

    return result;
}