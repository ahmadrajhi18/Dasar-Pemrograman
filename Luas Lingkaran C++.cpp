/* JUDUL */
/* PROGRAM MENGHITUNG LUAS LINGKARAN */
/* Deskripsi Program -> program membaca jari-jari lingkaran (r),
menghitung luas dan keliling lingkaran (L), kemudian mencetak luas ke layar*/

#include <iostream>

using namespace std;

int main()
{
     /* DEKLARASI AWAL */
    const float phi = 3.14;      /* konstanta nilai phi */
    float r;                     /* jari-jari lingkaran (cm) */
    float L;                     /* luas lingkaran (cm^) */
    float K;                     /* Keliling lingkaran (cm) */

     /* ALGORITMA */
    cout << "Masukkan jari-jari lingkaran (r) :  ";     /* tampilan r */
    cin >> r;                                           /* inputan r */
    L = phi * r * r ;
    K = phi * 2 * r ;
    cout << "\n  Luas lingkaran (L) adalah : " << L << " cm^" <<  endl;
    cout << "  Dan keliling lingkaran (K) adalah : " << K <<  " cm" << endl;

    return 0;
}
