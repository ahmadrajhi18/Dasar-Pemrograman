// JUDUL : Program Menghitung Jarak Antara Dua Titik

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    //Kamus
    float x1, x2, y1, y2, A, B, Jarak;

    //Algoritma
    cout << "\n Program Menghitung Jarak Antara Dua Titik" << endl;
    cout << "\n Input Titik A (x1)  :  " ;
    cin >> x1;
    cout << "\n Input Titik A (y1)  :  " ;
    cin >> x2;
    cout << "\n Input Titik B (x2)  :  " ;
    cin >> y1;
    cout << "\n Input Titik B (y2)  :  " ;
    cin >> y2;

    A =(y2-x2)*(y2-x2);
    B =(y1-x1)*(y1-x1);
    Jarak = sqrt(A+B);

    cout << "\n Jarak titik A ke titik B adalah =  " << Jarak << endl;
    cout << "\n program selesai \n";

    return 0;
}
