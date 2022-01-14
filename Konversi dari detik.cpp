//Program Konversi Detik

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int jam, menit, detik, x, y;

    //Algoritma
    cout << " \n Program Mengkonversi dari Detik" <<endl;
    cout << " \n Jumlah detik : ";
    cin >> x;

    jam = x/3600;
    y = x%3600;
    menit = y/60;
    detik = y%60;

    cout << "   Maka menjadi : " << jam << " jam " << menit << " menit " << detik << " detik " << endl;

    return 0;
}
