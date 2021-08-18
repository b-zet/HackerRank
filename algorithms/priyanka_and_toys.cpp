// https://www.hackerrank.com/challenges/priyanka-and-toys/problem

// solution code  WIP (too slow)
int toys(vector<int> w) {
    int result=1;
    int temp=0;
    int counter=0;

    for(int i=0;i<w.size();i++){
        for(int j=0;j<w.size()-1-i;j++){
            if(w[j]>w[j+1]){
                temp=w[j];
                w[j]=w[j+1];
                w[j+1]=temp;
            }
        }
    }
    int num=w[0];

    while(counter<w.size()){
        if(w[counter]<num+5) counter++;
        else {num=w[counter];result++;counter++;}
    }

    return result;
}
