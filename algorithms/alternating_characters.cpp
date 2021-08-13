// https://www.hackerrank.com/challenges/alternating-characters/problem

// solution code
int alternatingCharacters(string s) {
    int result=0;
    char letter;

    if(s[0]=='A') letter='A'; else letter='B';

    for (int i=1;i<s.size();i++){
        if(s[i]==letter) result++;
        else if(letter=='A') letter='B'; else letter='A';
    }

    return result;
}