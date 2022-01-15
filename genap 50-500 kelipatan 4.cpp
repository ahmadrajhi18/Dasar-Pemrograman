// JUDUL : Program Validasi

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int a;

    //Algoritma
    cout << "\n Program untuk menentukan bilangan genap antara 50 sampai 500 kelipatan 4" << endl;
    cout << "\n Masukkan angka :  " ;
    cin >> a;
    cout << endl;

    if(((a%4==0)&&(a>50)&&(a<500)))

    {
        cout << a << " adalah bilangan genap antara 50 sampai 500 kelipatan 4"  << endl;
    }
    else
    {
        cout << a << " BUKAN bilangan genap antara 50 sampai 500 kelipatan 4" << endl;
    }

    cout << "\n program selesai \n";

    return 0;
}
