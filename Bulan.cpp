//Program Analisis Banyak Kasus

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int x;

    //ALGORITMA
    cout << "Program mencetak nama bulan dalam setahun" << endl;
    cout << "\n Masukkan nomor bulan : ";
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "Januari";
            break;
        case 2:
            cout << "Fabruari";
            break;
        case 3:
            cout << "Maret";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "Mei";
            break;
        case 6:
            cout << "Juni";
            break;
        case 7:
            cout << "Juli";
            break;
        case 8:
            cout << "Agustus";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "Oktober";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "Desember";
            break;

        default:
            cout << "Input Tidak Valid";
            break;
    }

    return 0;
}
