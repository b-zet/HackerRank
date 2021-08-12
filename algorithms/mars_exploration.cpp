// https://www.hackerrank.com/challenges/mars-exploration/problem

// solution code
int marsExploration(string s) {
    int result=0;

    for(int i=0;i<s.size()/3;i++){
        if(s[3*i]!='S') result++;
        if(s[3*i+1]!='O')result++;
        if(s[3*i+2]!='S')result++;
    }

    return result;
}