// https://www.hackerrank.com/challenges/plus-minus/problem

// solution code
void plusMinus(vector<int> arr) {
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    int numberOfIntegers = arr.size();
    for (int i=0;i<numberOfIntegers;i++){
        if (arr[i]>0){
            positives++;
        }
        if (arr[i]<0){
            negatives++;
        }
        if (arr[i]==0){
            zeros++;
        }
    }
    cout << setprecision(6) << fixed;
    cout << float(positives) / numberOfIntegers  << endl;
    cout << float(negatives) / numberOfIntegers << endl;
    cout << float(zeros) / numberOfIntegers << endl;
}