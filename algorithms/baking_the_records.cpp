// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

// solution code
vector<int> breakingRecords(vector<int> scores) {
    int minimum = scores[0];
    int maximum = scores[0];
    vector<int> result;
    int nMin = 0;
    int nMax = 0;

    for(int i=1;i<scores.size();i++){
        if(scores[i]>maximum){
            maximum = scores[i];
            nMax++;
        }
        if(scores[i]<minimum){
            minimum = scores[i];
            nMin++;
        }
    }
    result.push_back(nMax);
    result.push_back(nMin);
    return result;
}
