// https://www.hackerrank.com/challenges/library-fine/problem

// solution code
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 < y2) return 0;
    if (y1==y2){
        if (m1 < m2) return 0;
        if(m1<=m2){
            if(d1<=d2) return 0;
            else return (d1-d2)*15;
        }
        else return (m1-m2) * 500;
    }
    else return 10000;
}