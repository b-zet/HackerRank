// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

// solution code
int theLoveLetterMystery(string s) {
    int result=0;
    int middle=s.size()/2;
    bool even;
    if(s.size()%2==0) even=true; else even=false;

    for (int i=1;i<middle+1;i++){
        if(even) result+=abs(s[middle+i-1]-s[middle-i]);
        else result+=abs(s[middle+i]-s[middle-i]);
    }

    return result;
}