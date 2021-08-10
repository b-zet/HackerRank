// https://www.hackerrank.com/challenges/equality-in-a-array/problem

// solution code
int equalizeArray(vector<int> arr) {
    int result=0;
    int n[101] {0};
    int temp=0;

    for(int i=0;i<arr.size();i++){
        n[arr[i]]++;
    }

    for (int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            if(n[j+1]>n[j]){
                temp=n[j+1];
                n[j+1]=n[j];
                n[j]=temp;
            }
        }
    }

    result = arr.size()-n[0];

    return result;
}

