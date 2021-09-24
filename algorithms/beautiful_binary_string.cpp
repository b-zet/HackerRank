// https://www.hackerrank.com/challenges/beautiful-binary-string/problem

// solution code
int beautifulBinaryString(string b) {
    int result{0};
    int i {2};

    while(i <= b.size()){
        if(b[i-2]=='0' && b[i-1]=='1' && b[i]=='0'){
            b[i]=1;
            result++;
        }
        i++;
    }
    return result;
}