#include <iostream>
#include <math.h>
using namespace std ;

int main () {

   float hasil, pangkat, b, x, c;

    //(4)program penyelesaian rumus
    cout << "\n ---PROGRAM PENYELESAIAN RUMUS---";
    b = 25;
    x = 15;
    c = 20;
    pangkat = 2;
    cout << "\n b = " << b;
    cout << "\n x = " << x;
    cout << "\n c = " << c;
    cout << "\n Y = bx^2 + 0.5X - c";
    cout << endl;

    hasil = (pow(x,pangkat)*b +(0.5*x)- c);
    cout << "\n Y = " << hasil;


    return 0;

}

