// https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

// solution code
string hackerrankInString(string s) {
    int letter{0};

    for(int i=0;i<s.size();i++){
        if (s[i] == "hackerrank"[letter]) letter++;
    }

    if (letter==10) return "YES";
    else return "NO";
}