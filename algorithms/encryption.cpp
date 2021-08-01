// https://www.hackerrank.com/challenges/encryption/problem

// solution code
string encryption(string s) {
    string result = "";
    int a = floor(sqrt(s.size()));
    int b=a;
    int idx=0;

    if((a*a)!=s.size()){b++;}

    for(int i=0;i<b*(b);i++){
        idx=((i+b)%b)*(b) + (i/b);
        if (idx<s.size()){result+=s[idx];}
        if (i%(b)==(b-1)){result+=" ";}
    }
    return result;
}