// https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem

// solution code
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    vector<int> result {};

    sort(sticks.begin(),sticks.end());
    reverse(sticks.begin(),sticks.end());

    for(int i=0;i<sticks.size();i++){
        for(int j=i;j<sticks.size();j++){
            for(int k=j;k<sticks.size();k++){
                if((i != j)&&(i != k)&&(j != k)&&(sticks[i]<sticks[j]+sticks[k])){
                    result.push_back(sticks[i]);
                    result.push_back(sticks[j]);
                    result.push_back(sticks[k]);
                    sort(result.begin(),result.end());
                    return result;
                }
            }
        }
    }

    result.push_back(-1);
    return result;
}