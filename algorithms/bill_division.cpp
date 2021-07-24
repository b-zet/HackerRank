// https://www.hackerrank.com/challenges/bon-appetit/problem

// solution code
void bonAppetit(vector<int> bill, int k, int b) {
    int result=0;

    for(int i=0;i<bill.size();i++){
        if (i!=k){result=result+bill[i];}
    }
    result=b-(result/2);
    if (result==0){cout << "Bon Appetit";} else {cout << result;}
}