// https://www.hackerrank.com/challenges/icecream-parlor/problem

// solution code
vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> result;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if (i==j){continue;}
            if(arr[i]+arr[j]==m){
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
        }
    }

    return result;
}