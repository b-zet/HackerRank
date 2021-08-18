// https://www.hackerrank.com/challenges/priyanka-and-toys/problem

// solution code
int toys(vector<int> w) {
    int result=0;
    int arr[10000] {0};
    int maxNumber=0;
    int counter=0;

    for(int i=0;i<w.size();i++){
        arr[w[i]]++;
        if (w[i]>maxNumber) maxNumber=w[i];
    }

    while(counter<=maxNumber){
        if(arr[counter]!=0) {result++;counter=counter+5;}
        else counter++;
    }

    return result;
}
