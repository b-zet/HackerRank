// https://www.hackerrank.com/challenges/halloween-sale/problem

// solution code
int howManyGames(int p, int d, int m, int s) {
    int result{0};

    if (s>p){
        result++;
        s-=p;
        if (p-d >= m)p-=d;
        else p=m;
    }

    while(s>=p && s>=m){
        result++;
        s-=p;
        if (p-d < m) p=m;
        else p-=d;
    }

    return result;
}