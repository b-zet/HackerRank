// https://www.hackerrank.com/challenges/manasa-and-stones/problem

// solution code
vector<int> stones(int n, int a, int b) {
    vector<int> stones;
    int temp{a};

    if(a==b) {
        stones.push_back((n-1)*a);
        return stones;
    }

    if(a>b){a=b;b=temp;}

    for(int i=(n-1)*a;i<=(n-1)*b;i+=b-a){
        stones.push_back(i);
    }

    return stones;
}