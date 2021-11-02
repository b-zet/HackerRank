// https://www.hackerrank.com/challenges/anagram/problem


// solution code
int anagram(string s) {
    int c1,c2,result{0};
    int mid=s.size()/2;
    string abc {"abcdefghijklmnopqrstuvwxyz"};

    if (s.size()%2==1) return -1;

    for (int l=0;l<abc.size();l++){
        c1=0;
        c2=0;
        for(int i=0;i<mid;i++){
            if(s[i]==abc[l]) c1++;
            if(s[i+mid]==abc[l]) c2++;
        }
        result += abs(c1-c2);
    }

    return result/2;
}