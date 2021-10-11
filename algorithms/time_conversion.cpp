// https://www.hackerrank.com/challenges/time-conversion/problem

// solution code
string timeConversion(string s) {
    string firstTwoDigits{};
    string constantDigits{};

    for(int i=0;i<8;i++){
        if (i>1) constantDigits += s[i];
        if (i<2) firstTwoDigits += s[i];
    }

    if(firstTwoDigits=="12") firstTwoDigits="00";

    if (s[8]=='P') return to_string(stoi(firstTwoDigits)+12)+constantDigits;
    else return firstTwoDigits+constantDigits;

}