// https://www.hackerrank.com/challenges/counting-valleys/problem

// solution code
int countingValleys(int steps, string path) {
    int result=0;
    int level=0;

    for(int i=0;i<path.size();i++){
        if(path[i]=='D'){level--;}
        if(path[i]=='U'){
            if(level==-1){result++;}
            level++;
        }
    }
    return result;
}