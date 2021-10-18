// https://www.hackerrank.com/challenges/append-and-delete/problem

// solution code
string appendAndDelete(string s, string t, int k) {
    int same{0};

    while((same<s.size()) & (same < t.size())){
        if (s[same]==t[same]) same++;
        else break;
    }

    int num = s.size()+t.size()-2*same;
    int diff = k-num;

    if ((num==k) | ((diff % 2==0) & (diff>0)) | (diff > 2 * same)) return "Yes";
    else return "No";
}