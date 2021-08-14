// https://www.hackerrank.com/challenges/making-anagrams/problem

// solution code
int makingAnagrams(string s1, string s2) {
    int result=0,temp1,temp2;
    string abc {"abcdefghijklmnoqprstuvwxyz"};

    for(int a=0;a<abc.size();a++){
        temp1=0;
        temp2=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==abc[a]) temp1++;
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]==abc[a]) temp2++;
        }
        result=result+abs(temp1-temp2);
    }
    return result;
}