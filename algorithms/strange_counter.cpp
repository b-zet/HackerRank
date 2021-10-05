// https://www.hackerrank.com/challenges/strange-code/problem

// solution code
long strangeCounter(long t) {
    int i{0};
    long c{0};

    while(c + pow(2,i)*3 < t){
        c = c + pow(2,i)*3;
        i++;
    }

    return pow(2,i)*3 - ( t - (c+1));
}