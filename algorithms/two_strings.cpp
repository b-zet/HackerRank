// https://www.hackerrank.com/challenges/two-strings/problem

// solution code
string twoStrings(string s1, string s2) {
    string abc {"abcdefghijklmnopqrstuvwxyz"};
    bool foundInOne=false;

    for(int i=0;i<27;i++){
        foundInOne=false;
        for(int j=0;j<s1.size();j++) {
            if(s1[j]==abc[i]) {foundInOne=true;break;}
        }
        if (foundInOne) for(int j=0;j<s2.size();j++) {
                if(s2[j]==abc[i]) {return "YES";}
            }
    }
    return "NO";
}

