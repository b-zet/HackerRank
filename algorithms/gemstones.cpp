// https://www.hackerrank.com/challenges/gem-stones/problem

// solution code
int gemstones(vector<string> arr) {
    string abc {"abcdefghijklmnqoprstuvwxyz"};
    bool gem,found;
    int result {0};

    for (int a=0;a<abc.size();a++){
        gem = true;
        for(int i=0;i<arr.size();i++){
            found = false;
            for(int j=0;j<arr[i].size();j++){
                if (abc[a]==arr[i][j]){found=true;break;}
            }

            if (!found) {gem=false;break;}
        }

        if (gem) {result++;}
    }

    return result;
}