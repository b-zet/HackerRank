// https://www.hackerrank.com/challenges/angry-professor/problem

// solution code
string angryProfessor(int k, vector<int> a) {
    string result;
    int onTime=0;

    for (int i=0;i<a.size();i++){
        if(a[i]<0){
            onTime++;
        }
    }
    if (onTime>=k){
        result="NO";
    }
    else {
        result="YES";
    }
    return result;
}