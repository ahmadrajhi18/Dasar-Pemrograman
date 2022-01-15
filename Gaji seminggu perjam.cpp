//Program Analisis Banyak Kasus

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int jam, gaji, lembur;
    gaji = 150000;
    lembur = 100000;


    //ALGORITMA
    cout << " Program menentukan gaji karyawan berdasarkan jam kerja selama seminggu" << endl;
    cout << " \n  Masukkan jumlah jam : " ;
    cin >> jam;
    cout << endl;

    if ((jam > 0)&&(jam <= 48))
    {
        cout << "Gaji : " << jam*gaji << endl;
    }
    else if ((jam > 48)&&(jam <= 168))
        {
        cout << "Gaji : " << (48*gaji)+((jam-48)*lembur) << endl;
        }
    else
    {
        cout << "Input Tidak Valid";
    }

    cout << " \n Program selesai";

    return 0;
}

/*
JUDUL
    Program menentukan gaji karyawan berdasarkan jam kerja selama seminggu

KAMUS
    jam, gaji, integer : integer
    gaji : 150000
    lembur : 100000

ALGORITMA
    input (x)
    if x<= 48 then
        output ("jam*gaji")
    else if x > 48 then
        output ("(48*gaji)+((jam-48)*lembur)")
    else
        output ("Tidak ada gaji")
    endif
*/
