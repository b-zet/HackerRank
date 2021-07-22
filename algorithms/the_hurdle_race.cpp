// https://www.hackerrank.com/challenges/the-hurdle-race/problem

// solution code
int hurdleRace(int k, vector<int> height) {
    int result=0;
    int maxHeight = 0;
    for(int i=0;i<height.size();i++){
        if(height[i]>maxHeight){maxHeight=height[i];}
    }
    result=maxHeight-k;
    if(result<0){result=0;}

    return result;
}