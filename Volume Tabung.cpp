#include <iostream>

using namespace std;

int main()
{

    const float phi = 3.14;      /* konstanta nilai phi */
    float r;                     /* jari-jari alas tabung (cm) */
    float t;                     /* tinggi tabung (cm) */
    float V;                     /* Volume tabung (cm3) */

    cout << " \n Program Menghitung Volume Tabung" <<endl;
    cout << " \n Masukkan jari-jari alas tabung (r) :  ";
    cin >> r;
    cout << " Masukkan tinggi tabung (t) :  ";
    cin >> t;

    V = phi * r * r * t ;

    cout << " \n  Volume Tabung (V) adalah : " << V << " cm3" <<  endl;

    return 0;
}
