// https://www.hackerrank.com/challenges/game-of-thrones/problem

// solution code
string gameOfThrones(string s) {
    string result="NO";
    string abc = "abcdefghijklmnqoprstuvwxyz";
    int letterCount [26] {0};
    int nOdd=0;

    for(int i=0;i<26;i++){
        for(int j=0;j<s.size();j++){
            if (s[j]==abc[i])letterCount[i]++;
        }
        if (letterCount[i]%2!=0) nOdd++;
    }

    if ((s.size()%2==0)&&(nOdd==0)) result="YES";
    if ((s.size()%2==1)&&(nOdd==1)) result="YES";

    return result;
}