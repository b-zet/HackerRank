// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

// solution code
int jumpingOnClouds(vector<int> c) {
    int result{0};
    int counter{0};
    int number=c.size();

    if(number==2) return 1;

    while(counter<number){
        if(counter+2 <= number && c[counter+2]==0) counter += 2;
        else counter++;

        result++;
    }

    return result-1;
}