#include <iostream>
#include <math.h>
using namespace std ;

int main () {

   float alas, tinggi,pangkat, sisimiring,hasil, hasill, nilaipraktikum, nilaiUTS, nilaiUAS,praktikum, UTS, UAS, persen1, persen2, persen3, V, R, I, b, x, c;

   //(1)sisi miring phytagoras
   cout << " ---RUMUS SISI MIRING PHYTAGORAS---"<< endl;
   alas = 8;
   tinggi = 10;
   pangkat = 2;

   hasil = (pow(alas,pangkat)+pow(tinggi,pangkat));
   sisimiring = sqrt(hasil);

    cout << " sisi miring = " << sisimiring << endl;
     cout << "\n ==========================";

    //(2)nilai akhir mahasiswa
    cout << "\n---NILAI AKHIR MAHASISWA---";
    nilaipraktikum = 75;
    nilaiUTS = 70;
    nilaiUAS = 88;
    persen1 = 20;
    persen2 = 30;
     persen3 = 50;

    praktikum = (persen1/100)*nilaipraktikum;
    cout << "\n nilai praktikum = " << nilaipraktikum;
    UTS = (persen2/100)*nilaiUTS;
    cout << "\n nilai UTS = " << nilaiUTS;
    UAS = (persen3/100)*nilaiUAS;
    cout << "\n nilai UAS = " << nilaiUAS;

    hasil = praktikum+UTS+UAS;
    cout << "\n nilai akhir = " << hasil;
    cout << "\n";
     cout << "\n ==========================";


    //(3)menghitung arus,tegangan, dan hambatan
    cout << "\n ---NILAI ARUS---";
    cout << endl;
    cout << "nilai tegangan (v) = ";
    cin >> V;
    cout << "nilai  hambatan (R) = ";
    cin >> R;
    cout << endl;
    cout << " I = V/R ";

    hasil = V/R;
    cout << "\n I = " << hasil;
    cout << endl;

    cout << "\n ---NILAI tegangan---";
    cout << endl;
    cout << "nilai Arus (I) = ";
    cin >> I;
    cout << "nilai  hambatan (R) = ";
    cin >> R;
    cout << endl;
    cout << " V = IxR ";

    hasil = I*R;
    cout << "\n V = " << hasil;
    cout << endl;

    cout << "\n ---NILAI hambatan---";
    cout << endl;
    cout << "nilai Arus (V) = ";
    cin >> V;
    cout << "nilai  hambatan (I) = ";
    cin >> I;
    cout << endl;
    cout << " R = V/I ";

    hasil = V/I;
    cout << "\n R = " << hasil;

    cout << "\n";
     cout << "\n ==========================";


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
