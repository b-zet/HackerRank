// https://www.hackerrank.com/challenges/find-digits/problem

// solution code
int findDigits(int n) {
    int result=0;
    int number=n;

    if (n%(n%10)==0){result++;}

    while ( n /= 10 ){
        if ((n%10!=0)&&(number%(n%10)==0)){result++;}
    }
    return result;
}