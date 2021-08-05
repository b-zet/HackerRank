// https://www.hackerrank.com/challenges/electronics-shop/problem

// solution code
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int result=-1;
    int sum=0;

    for(int i=0;i<keyboards.size();i++){
        for(int j=0;j<drives.size();j++){
            sum=keyboards[i]+drives[j];
            if ((sum>result)&(sum<=b)){
                result=sum;
            }
        }
    }
    return result;
}