// https://www.hackerrank.com/challenges/migratory-birds/problem

// solution code
int migratoryBirds(vector<int> arr) {
    int result=0;
    int t[6] {0};

    for(int i=0;i<arr.size();i++){
        for(int j=1;j<5+1;j++){
            if (arr[i]==j)t[j]++;
        }
    }

    for (int i=1;i<5+1;i++){
        if(t[i]>t[result]) result=i;
    }

    return result;
}