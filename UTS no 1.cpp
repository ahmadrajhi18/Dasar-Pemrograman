#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int ibukota;

    //ALGORITMA
    cout << "Program mencetak nama provinsi berdasarkan ibukota" << endl;
    cout << " 1. Serang \n 2. Jakarta \n 3. Bandung \n 4. Semarang \n 5. Yogyakarta \n 6. Surabaya" <<endl;
    cout << "\n Masukkan nomor ibukota : ";
    cin >> ibukota;
    switch (ibukota)
{
        case 1:
            cout << "Provinsi Banten";
            break;
        case 2:
            cout << "Provinsi DKI Jakarta";
            break;
        case 3:
            cout << "Provinsi Jawa Barat";
            break;
        case 4:
            cout << "Provinsi Jawa Tengah";
            break;
        case 5:
            cout << "Provinsi D.I Yogyakarta";
            break;
        case 6:
            cout << "Provinsi Jawa Timur";
            break;
        default:
            cout << "Input Tidak Valid";
            break;
}
return 0;
}
