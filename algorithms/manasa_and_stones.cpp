// https://www.hackerrank.com/challenges/manasa-and-stones/problem

// solution code 28/30 points  (too slow)
vector<int> stones(int n, int a, int b) {
    vector<int> stonesCount;
    vector<int> stonesTotal;
    vector<int> stonesUnique;
    int temp{0};

    // recursion
    if (n>2){
        stonesCount = stones(n-1,a,b);
    } else{
        if(a<b){
            stonesCount.push_back(a);
            stonesCount.push_back(b);
        } else if(a>b){
            stonesCount.push_back(b);
            stonesCount.push_back(a);
        } else if(a==b) stonesCount.push_back(b);
        return stonesCount;
    }

    // adding new stones
    for(int i=0;i<stonesCount.size();i++){
        stonesTotal.push_back(stonesCount[i]+a);
        stonesTotal.push_back(stonesCount[i]+b);
    }

    // sorting
    if (n>2){
        for (int i=0;i<stonesTotal.size();i++){
            for(int j=0;j<stonesTotal.size()-1;j++){
                if(stonesTotal[j+1]<stonesTotal[j]){
                    temp = stonesTotal[j+1];
                    stonesTotal[j+1]=stonesTotal[j];
                    stonesTotal[j]=temp;
                }
            }
        }
    }

    // delete duplicates
    stonesUnique.push_back(stonesTotal[0]);
    for(int i=1;i<stonesTotal.size();i++){
        if(stonesTotal[i]!=stonesTotal[i-1]) stonesUnique.push_back(stonesTotal[i]);
    }

    return stonesUnique;
}