// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>

void update(int *a,int *b) {
    int old_a = *a;
    int old_b = *b;
    *a = old_a+old_b;
    if (old_a>old_b){
        *b = old_a-old_b;
    }
    else {
        *b = old_b-old_a;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}