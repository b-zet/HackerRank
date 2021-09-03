// https://www.hackerrank.com/challenges/crush/problem

// solution code
long arrayManipulation(int n, vector<vector<int>> queries) {
    long result {0};
    long temp {0};
    long* arr = new long[n] {0};

    // marking edges of ranges as +k at a, and -k at b (see problem desc.). flattening the array 2D into 1D sums.
    for(int i=0;i<queries.size();i++){
        arr[queries[i][0]-1]=arr[queries[i][0]-1] + queries[i][2];
        if(queries[i][1]-1<n-1) arr[queries[i][1]]=arr[queries[i][1]] - queries[i][2];
    }

    // rolling summary -> finding max value;
    for(int i=0;i<n;i++){
        temp = temp + arr[i];
        if (temp > result) result = temp;
    }

    return result;
}