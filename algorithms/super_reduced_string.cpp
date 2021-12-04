// https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=false

// solution code
string superReducedString(string s) {
    bool done{false};
    int num;

    while(not done){
        done=true;
        num=0;

        while (num<s.size()) {
            if(s[num]==s[num+1]) {s.erase(num,2);done=false;num--;}
            num++;
        }
    }

    if(s=="") s="Empty String";
    return s;
}