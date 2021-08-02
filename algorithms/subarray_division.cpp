// https://www.hackerrank.com/challenges/the-birthday-bar/problem

// solution code
int birthday(vector<int> s, int d, int m) {
    int result=0;
    int temp=0;

    for(int i=0;i<s.size();i++){
        temp=0;
        for(int j=0;j<m;j++){
            temp=temp+s[i+j];
        }
        if(temp==d){result++;}
    }
    return result;
}
