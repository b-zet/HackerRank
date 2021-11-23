// https://www.hackerrank.com/challenges/the-time-in-words/problem?isFullScreen=false

// solution code
string timeInWords(int h, int m) {
    string numbers [31] {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half"};
    string minutes{" minutes"};
    if (m%15==1) minutes=" minute";
    if (m%15==0) minutes="";
    if ((m>30)&&(h==12)) h=0;

    if ((m>=1)&&(m<=30)) return numbers[m]+minutes+" past "+numbers[h];
    if ((m>=31)&&(m<=59)) return numbers[60-m]+minutes+" to "+numbers[h+1];

    return numbers[h]+" o' clock";
}