// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

// solution code
int birthdayCakeCandles(vector<int> candles) {
    int cNumber = 0;
    int cHeight = candles[0];

    for (int i=0;i<candles.size();i++){
        if (candles[i]>cHeight){
            cHeight = candles[i];
            cNumber = 0;
        }

        if (candles[i]==cHeight){
            cNumber++;
        }
    }
    return cNumber;
}