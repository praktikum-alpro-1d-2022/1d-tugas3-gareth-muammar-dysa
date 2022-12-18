#include <iostream>
using namespace std ;

int main () {

   float hasil,  nilaipraktikum, nilaiUTS, nilaiUAS,praktikum, UTS, UAS, persen1, persen2, persen3;


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
return 0;
}
