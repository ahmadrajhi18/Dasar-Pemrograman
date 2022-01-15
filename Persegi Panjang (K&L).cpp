/* JUDUL */
/* PROGRAM MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG */

#include <iostream>

using namespace std;

int main()
{
     /* KAMUS */
    float p;    /* panjang (cm) */
    float l;    /* lebar (cm) */
    float K;    /* Keliling (cm) */
    float L;    /* Luas (cm^) */

     /* ALGORITMA */
    cout << "Masukkan panjang (p) :  ";
    cin >> p;
    cout << "Masukkan lebar (l) :  ";
    cin >> l;
    K = 2 *( p + l ) ;
    L = p * l ;
    cout << "\n  Keliling (K) adalah : " << K <<  " cm" << endl;
    cout << "\n  Luas (L) adalah : " << L << " cm^" <<  endl;

    return 0;
}

