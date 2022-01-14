// JUDUL : Program Validasi

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int a;
    const int x = 48;

    //Algoritma
    cout << "\n Program untuk mengecek kapasitas penumpang bus pariwisata" << endl;
    cout << "\n Masukkan jumlah orang :  " ;
    cin >> a;
    if(a > x)
    {
        cout << "\n < tidak muat >" << endl;
    }
    if(a < x)
    {
        cout << "\n < muat >" << endl;
    }
    cout << "\n program selesai \n";

    return 0;
}
