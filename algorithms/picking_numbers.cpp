// https://www.hackerrank.com/challenges/picking-numbers/problem

// solution code
int pickingNumbers(vector<int> a) {
    int result=0;
    int sub,t;

    //bubble sort vector a
    for (int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            if(a[j+1]<a[j]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    //finding the longest subarray
    for (int i=0;i<a.size();i++){
        sub=1;
        for (int j=i+1;j<a.size();j++){
            if(abs(a[i]-a[j])>1){continue;}
            sub++;
        }
        if(sub>result){result=sub;}
    }
    return result;
}