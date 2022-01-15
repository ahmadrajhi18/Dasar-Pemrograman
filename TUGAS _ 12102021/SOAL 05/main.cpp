#include <iostream>

using namespace std;

int main()
{
    /* SOAL NOMOR 5 */
     /* DEKLARASI AWAL */

    const float phi = 3.14;      /* konstanta nilai phi */
    float r;                     /* jari-jari alas tabung (cm) */
    float t;                     /* tinggi tabung (cm) */
    float K;                     /* Keliling alas tabung (cm) */
    float L;                     /* luas tabung (cm2) */
    float V;                     /* Volume tabung (cm3) */

    r = 10;
    t = 10;
    K = phi * 2 * r ;
    L = phi * r * r ;
    V = phi * r * r * t ;

    cout << " \n Program Menyelesaikan masalah pada Tabung dengan r = 10cm dan t = 10cm"<<endl;
    cout << "\n  Keliling Alas Tabung (K) adalah : " << K << " cm" << endl;
    cout << "  Luas Tabung (L) adalah : " << L << " cm2" <<  endl;
    cout << "  Volume Tabung (V) adalah : " << V << " cm3" <<  endl;

    return 0;
}
