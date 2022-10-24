#include <iostream>
#include <math.h>
using namespace std ;

int main () {

   float alas, tinggi,pangkat, sisimiring,hasil;

   //(1)sisi miring phytagoras
   cout << " ---RUMUS SISI MIRING PHYTAGORAS---"<< endl;
   alas = 8;
   tinggi = 10;
   pangkat = 2;

   hasil = (pow(alas,pangkat)+pow(tinggi,pangkat));
   sisimiring = sqrt(hasil);

    cout << " sisi miring = " << sisimiring << endl;
     cout << "\n ==========================";


    return 0;

}
