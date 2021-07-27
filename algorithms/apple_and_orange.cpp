// https://www.hackerrank.com/challenges/apple-and-orange/problem

// solution code
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int nApples=0;
    int nOranges=0;

    for (int i=0;i<apples.size();i++){
        if((apples[i]+a>=s)&&(apples[i]+a<=t)){
            nApples++;
        }
    }
    for (int i=0;i<oranges.size();i++){
        if((b+oranges[i]>=s)&&(b+oranges[i]<=t)){
            nOranges++;
        }
    }

    cout << nApples << endl;
    cout << nOranges << endl;
}