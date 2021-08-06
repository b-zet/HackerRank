// https://www.hackerrank.com/challenges/minimum-distances/problem

// solution code
int minimumDistances(vector<int> a) {
    int result=1001;
    int d;

    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            if((a[i]==a[j])&(i!=j)){
                d=abs(i-j);
                if(d<result)result=d;
            }
        }
    }
    if(result==1001) result=-1;

    return result;
}
