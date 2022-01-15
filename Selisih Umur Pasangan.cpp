//PROGRAM MENGHITUNG SELISIH UMUR
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
                cout << "\n PROGRAM MENGHITUNG SELISIH UMUR \n" << endl;

                //KAMUS
                string arrHari[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
                string arrBulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
                                        "Agustus", "September", "Oktober", "November", "Desember"};
                int umurthnA, umurblnA, umurtglA, tglA, blnA, thnA, i, j, k,
                    umurthnB, umurblnB, umurtglB, tglB, blnB, thnB, umurthnS, umurblnS, umurtglS;
                string NamaA, NamaB;
                time_t now = time(0);
                char* tanggal = ctime(&now);
                tm *ltm = localtime(&now);
                k = ltm->tm_mon;


                //ALGORITMA
                   cout << "=======================================================" << endl;
                   cout <<"\n Waktu Sekarang : " << tanggal << endl;
                   cout << " jam     : " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
                   cout << " Tanggal : " <<  ltm->tm_mday << endl;
                   cout << " Bulan   : " << arrBulan[k] << endl;
                   cout << " Tahun   : " << 1900 + ltm->tm_year <<endl;
                   cout << "\n=======================================================" << endl;


                    //Input Tanggal Lahir Anda
                    cout << "\n Masukkan Nama Lengkap Anda : " ;
                    cin >> NamaA ;
                    cout << " Lahir Pada, " << endl;
                    cout << "  Tanggal  : ";
                    cin >> tglA ;
                    cout << "  Bulan ke : ";
                    cin >> blnA ;
                    cout << "  Tahun    : ";
                    cin >> thnA ;
                    cout << endl;

                    //Input Tanggal Lahir Pasangan Anda
                    cout << " Masukkan Nama Lengkap Pasangan Anda : ";
                    cin >> NamaB ;
                    cout << " Lahir Pada, " << endl;
                    cout << "  Tanggal  : ";
                    cin >> tglB ;
                    cout << "  Bulan ke : ";
                    cin >> blnB ;
                    cout << "  Tahun    : ";
                    cin >> thnB ;
                    cout << endl;

                    //Rumus Umur Anda
                    i=blnA-1;

                    if (tglA<ltm->tm_mday)
                    {
                    umurthnA = (1900 + ltm->tm_year)-thnA;
                    umurbln1A = 12-k;
                    umurtglA = ltm->tm_mday-tglA;
                    }
                    else
                    {
                    umurthnA = (1900 + ltm->tm_year)-thnA;
                    umurbln1A = 12-blnA;
                    umurtglA = 31-(tglA-ltm->tm_mday);
                    }

                    //Rumus Umur Pasangan Anda
                    j=blnB-1;

                    if (tglB<ltm->tm_mday)
                    {
                    umurthnB = (1900 + ltm->tm_year)-thnB;
                    umurbln1B = 12-k;
                    umurtglB = ltm->tm_mday-tglB;
                    }
                    else
                    {
                    umurthnB = (1900 + ltm->tm_year)-thnB;
                    umurbln1B = 12-blnB;
                    umurtglB = 31-(tglB-ltm->tm_mday);
                    }

                    //Rumus Selisih Umur

                    umurthnS = thnA-thnB;
                    umurblnS = blnA-blnB;
                    umurtglS = tglA-tglB;


                    //Output
                    cout << "=======================================================" << endl;
                    cout << "\n Identitas Anda : " << endl;
                    cout << "   Nama  : " << NamaA << endl;
                    cout << "   Lahir : " << tglA << "-" << arrBulan[i] << "-" << thnA << endl;
                    cout << "\n Identitas Pasangan Anda : " << endl;
                    cout << "   Nama  : " << NamaB << endl;
                    cout << "   Lahir : " << tglB << "-" << arrBulan[j] << "-" << thnB << endl;
                    cout << "\n Sekarang Anda Berumur : " << umurthnA-1 << " tahun " << umurbln1A << " bulan " << umurtglA << " hari " << endl;
                    cout << " Pasangan Anda Berumur : " << umurthnB-1 << " tahun " << umurblnB << " bulan " << umurtglB << " hari " << endl;
                    cout << "\n Selisih Umur Anda dengan Pasangan Anda adalah : " << umurthnS << " tahun " << umurblnS << " bulan " << umurtglS << " hari " << endl;

                    cout << "\n=======================================================" << endl;



    return 0;
}

