//Program Analisis Banyak Kasus

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int km;


    //ALGORITMA
    cout << " Program menentukan kondisi mobil menurut kilometernya";
    cout << " \n  Masukkan kilometer : ";
    cin >> km;
    if (km <= 20000)
    {
        cout << "kondisi bagus, tetap jaga";
    }
    else if (km <= 80000)
        {
        cout << "kondisi bagus, perlu perawatan ekstra";
        }
    else
    {
        cout << "perlu beli mobil baru";
    }

    cout << " \n  Program selesai";

    return 0;
}
