// https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=false

// solution code
string dayOfProgrammer(int year) {
    int day=13;

    if (year==1918) return "26.09."+to_string(year);

    if ((year<=1917)&(year%4==0)) day--;
    if ((year>=1919)&(year%400==0)) day--;
    if ((year>=1919)&(year%4==0)&(year%100!=0)) day--;

    return to_string(day)+".09."+to_string(year);
}