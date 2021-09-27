// https://www.hackerrank.com/challenges/caesar-cipher-1/problem

// solution code
string caesarCipher(string s, int k) {
    string result;
    string abc {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string abc2 {"abcdefghijklmnopqrstuvwxyz"};
    bool found;
    int offset;
    for(int i=0;i<s.size();i++){
        found=false;
        offset = k%26;
        for(int j=0;j<abc.size();j++) {
            if (j+offset>=26) offset-=26;
            if(abc[j]==s[i]) {result += abc[j+offset];found=true;break;}
            if(abc2[j]==s[i]) {result += abc2[j+offset];found=true;break;}
        }
        if (not found) result += s[i];
    }

    return result;
}