// https://www.hackerrank.com/challenges/sparse-arrays/problem

// solution code
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result;

    for(int i=0;i<queries.size();i++){
        result.push_back(0);
        for(int j=0;j<strings.size();j++){
            if(queries[i]==strings[j]) result[i]++;
        }
    }

    return result;
}