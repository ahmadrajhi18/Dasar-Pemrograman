//Notasi Algoritma
/*
JUDUL
    Program untuk mengetahui tahun kabisat

KAMUS
    tahun <- integer

ALGORITMA
    input (tahun)
    if ((tahun mod 400 not eq 0)&&(tahun%100==0)) then
        output ("tahun tersebut sudah pasti BUKAN merupakan tahun kabisat")
    else if (tahun%400 eq 0) then
        output ("tahun tersebut PASTI merupakan tahun kabisat")
    else if (((tahun mod 400 not eq 0)&&(tahun%100!=0)&&(tahun%4==0))) then
        output ("tahun tersebut merupakan tahun kabisat")
    else if (((tahun mod 400!=0)&&(tahun%100!=0)&&(tahun%4!=0))) then
        output ("tahun tersebut BUKAN merupakan tahun kabisat")
    else
        output ("Input Tidak Valid")
    endif
*/



//Program Analisis Banyak Kasus

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int tahun;

    //ALGORITMA
    cout << " Program untuk mengetahui tahun kabisat" << endl;
    cout << " \n  Masukkan jumlah tahun : " ;
    cin >> tahun;
    if ((tahun%400!=0)&&(tahun%100==0))
    {
        cout << "tahun tersebut sudah pasti BUKAN merupakan tahun kabisat" << endl;
    }
    else if (tahun%400==0)
        {
        cout << "tahun tersebut PASTI merupakan tahun kabisat" << endl;
        }
    else if (((tahun%400!=0)&&(tahun%100!=0)&&(tahun%4==0)))
        {
        cout << "tahun tersebut merupakan tahun kabisat" << endl;
        }
    else if (((tahun%400!=0)&&(tahun%100!=0)&&(tahun%4!=0)))
        {
        cout << "tahun tersebut BUKAN merupakan tahun kabisat" << endl;
        }
    else
    {
        cout << "Input Tidak Valid";
    }

    cout << " \n  Program selesai";

    return 0;
}

