// https://www.hackerrank.com/challenges/pangrams/problem

// solution code
string pangrams(string s) {
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string abc2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool found [26] {false};

    for(int i=0;i<s.size();i++){
        for(int j=0;j<abc.size();j++) {
            if ((s[i]==abc[j])|(s[i]==abc2[j])){
                found[j]=true;
                break;
            }
        }
    }
    for(int i=0;i<26;i++){
        if (found[i]==false) return "not pangram";
    }

    return "pangram";
}
