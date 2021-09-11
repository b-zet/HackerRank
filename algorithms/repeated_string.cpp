// https://www.hackerrank.com/challenges/repeated-string/problem

// solution code
long repeatedString(string s, long n) {
    long result{0};
    long counter{0};
    long a = n/s.size();
    long b = n-a*s.size();
    long c{0};

    while(counter<s.size()){
        if(s[counter]=='a') c++;
        if(b>0 && counter<b && s[counter]=='a') result++;
        counter++;
    }
    return result + c*a;
}
