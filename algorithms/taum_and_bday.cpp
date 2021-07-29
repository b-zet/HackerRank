// https://www.hackerrank.com/challenges/taum-and-bday/problem

// solution code
long taumBday(int b, int w, int bc, int wc, int z) {
    long long llb=b,llw=w,llbc=bc,llwc=wc,llz=z;

    if(wc > bc+z){llwc=llbc+llz;} else {
        if(bc > wc+z){llbc=llwc+llz;}
    }

    return llb*llbc+llw*llwc;
}