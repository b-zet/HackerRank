// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

// solution code
string catAndMouse(int x, int y, int z) {
    int dist=0;

    if ((z-x)>(z-y)){dist = abs(z-y);}
    else {dist=abs(z-x);}

    for (int i=0;i<dist+1;i++){
        if ((z==x)&&(z!=y)){ return "Cat A";}
        if ((z==y)&&(z!=x)){ return "Cat B";}
        if ((z==x)&&(z==y)){ return "Mouse C";}

        if (z>x){x++;}
        else {x--;}

        if (z>y){y++; }
        else {y--;}
    }
    return "Mouse C";
}