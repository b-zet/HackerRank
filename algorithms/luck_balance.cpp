// https://www.hackerrank.com/challenges/luck-balance/problem

// solution code
int luckBalance(int k, vector<vector<int>> contests) {
    int result{0};
    vector<int> arr{};

    for (int i=0;i<contests.size();i++){
        if (contests[i][1]==0) result+=contests[i][0];
        else arr.push_back(contests[i][0]);
    }
    if(arr.size()==0) return result;
    if(arr.size()<=k) {
        for(int i=0;i<arr.size();i++) result += arr[i];
        return result;
    }

    sort(begin(arr),end(arr));
    for(int i=0;i<arr.size()-k;i++){result -= arr[i];}
    for(int i=arr.size()-k;i<arr.size();i++){result += arr[i];}

    return result;
}