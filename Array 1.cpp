#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int main()
{
    //PROGRAM MENCETAK GAMBAR DENGAN MEMASUKKAN NOMOR BULAN LAHIR

    cout << "\n 3. PROGRAM MENGHITUNG UMUR BERDASARKAN TANGGAL LAHIR \n" << endl;

    //KAMUS
    string arrHari[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    string arrBulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
                            "Agustus", "September", "Oktober", "November", "Desember"};
    int umurthn, umurbln1, umurtgl, tgl, bln, thn, j, k;
    time_t now = time(0);
    char* tanggal = ctime(&now);
    tm *ltm = localtime(&now);
    k = ltm->tm_mon;


    //ALGORITMA
       cout << "=======================================================" << endl;
       cout <<"\n Waktu Sekarang : " << tanggal << endl;
       cout << "  jam     : " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
       cout << "  Tanggal : " << ltm->tm_mday << endl;
       cout << "  Bulan   : " << arrBulan[k] << endl;
       cout << "  Tahun   : " << 1900 + ltm->tm_year <<endl;
       cout << "\n=======================================================" << endl;


        //Input Tanggal Lahir
        cout << "\n Masukkan Tanggal Lahir Anda, " << endl;
        cout << "  Tanggal  : ";
        cin >> tgl ;
        cout << "  Bulan ke : ";
        cin >> bln ;
        cout << "  Tahun    : ";
        cin >> thn ;
        cout << endl;

        j=bln-1;

        if (tgl<ltm->tm_mday)
        {
        umurthn = (1900 + ltm->tm_year)-thn;
        umurbln1 = 12-k;
        umurtgl = ltm->tm_mday-tgl;
        }
        else
        {
        umurthn = (1900 + ltm->tm_year)-thn;
        umurbln1 = 12-bln;
        umurtgl = 31-(tgl-ltm->tm_mday);
        }

        //Output
        cout << "=======================================================" << endl;
        cout << "\n Anda lahir pada : " ;
        cout << tgl << "-" << arrBulan[j] << "-" << thn << endl;
        cout << "\n Sekarang Anda Berumur : " << umurthn-1 << " tahun " << umurbln1 << " bulan " << umurtgl << " hari " << endl;
        cout << "\n=======================================================" << endl;

    return 0;
}
