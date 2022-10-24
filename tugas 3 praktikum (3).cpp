#include <iostream>
using namespace std ;

int main () {

   float hasil, V, R, I,;

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
return 0;
}
