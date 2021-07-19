// https://www.hackerrank.com/challenges/compare-the-triplets/problem

// answer code.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int x = 0;
    int y = 0;
    vector<int> result;
    for (int i=0;i<3;i++) {
        if (a[i] > b[i]) {
            x++;
        }
        if (a[i] < b[i]) {
            y++;
        }
    }
    result.push_back(x);
    result.push_back(y);
    return result;
}
