// https://www.hackerrank.com/challenges/camelcase/problem

// solution code
int camelcase(string s) {
    int result=0;
    for (int i=0;i<s.size();i++){
        if(isupper(s[i])){result++;}
    }
    return result+1;
}