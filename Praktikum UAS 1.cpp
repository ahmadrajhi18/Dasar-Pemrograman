#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int main()
{
 char ulang;
 do
 {
    int pilih;
    cout << "=======================================================\n" << endl;
    cout << "SILAKAN PILIH PROGRAM" << endl
         << " 1. PROGRAM MENGHITUNG (BMI) BODY MASS INDEX" << endl
         << " 2. PROGRAM MENCETAK GAMBAR DENGAN MEMASUKKAN NOMOR BULAN LAHIR" << endl
         << " 3. PROGRAM MENGHITUNG UMUR BERDASARKAN TANGGAL LAHIR" << endl;
    cout << "\n=======================================================\n" << endl;
    cout << "Masukan angka pilihan : ";
    cin >> pilih;
        if (pilih == 1)
            {
            //PROGRAM MENGHITUNG (BMI) BODY MASS INDEX

                //KAMUS
                float TBm, TBcm, BB, BMI;
                /*
                TBm     => tinggi badan dalam meter
                TBcm    => tinggi badan dalam centimeter
                BB      => berat badan dalam kilogram
                BMI     => Indeks Massa Tubuh
                */

                //ALGORITMA
                cout << "\n 1. PROGRAM MENGHITUNG (BMI) BODY MASS INDEX" << endl;
                cout << "=======================================================" << endl;
                cout << "\n Input Berat Badan (kg) : " ;
                cin >> BB;      //menginputkan BB
                cout << "\n Input Tinggi Badan (cm) : " ;
                cin >> TBcm;    //menginputkan TBcm
                cout << "=======================================================" << endl;

                    //Mengkonversi tinggi badan dari centimeter ke meter
                    TBm = TBcm/100;

                    //Rumus BMI
                    BMI = BB/(TBm*TBm);

                cout << "\n Nilai BMI Anda : " << BMI << endl;

                if (BMI < 18.5)
                {
                    cout << " \n Anda termasuk kategori = Kurus" << endl;
                }
                else if (BMI >= 18.5 && BMI < 25)
                {
                    cout << " \n Anda termasuk kategori = Normal/Ideal" << endl;
                }
                else if (BMI >= 25 && BMI < 30)
                {
                    cout << " \n Anda termasuk kategori = Kelebihan Berat Badan" << endl;
                }
                else if (BMI >= 30)
                {
                    cout << " \n Anda termasuk kategori = Kegemukan" << endl;
                }
                else
                {
                    cout << " Input Tidak Valid" << endl;
                }
                cout << "\n=======================================================" << endl;
            }

        else if (pilih == 2)
            {
            //PROGRAM MENCETAK GAMBAR DENGAN MEMASUKKAN NOMOR BULAN LAHIR

              cout << "\n 2. PROGRAM MENCETAK GAMBAR DENGAN MEMASUKKAN BULAN LAHIR" << endl;
              cout << "=======================================================" << endl;
              cout << endl;

            //KAMUS
              int bl,bp,us,us2,g,h,i,j,k;
                /*
                bl   => bulan lahir
                bp   => ukuran pola I U
                us   => ukuran pola LOVE
                */

            //ALGORITMA
              cout << " Anda Lahir Pada Bulan Ke : ";
              cin >> bl ;
              cout << endl;

                if((bl>0)&&(bl<=12))
                    {
                        cout << " CONGRATULATION!! .. " << endl;

                  us=13;
                  bp=6;

                        //Mencetak "I"
                          cout << endl;
                          //Mencetak "I" bagian atas
                          for(g=1;g<=2;g++)
                            {
                            for(h=1;h<=9;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=4;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }
                          //Mencetak "I" bagian tengah
                          for(g=1;g<=bp;g++)
                            {
                            for(h=1;h<=11;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=2;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }
                          //Mencetak "I" bagian bawah
                          for(g=1;g<=2;g++)
                            {
                            cout << "   ";
                            for(h=1;h<=bp;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=4;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }


                        //Mencetak "LOVE"
                          cout << endl;
                          //Mencetak "LOVE" bagian atas
                          cout << "  ";
                          for(k=1; k<=4-i; k++)
                                {
                                cout << " *";
                                }
                            cout << "      ";
                          for(k=1; k<=4-i; k++)
                                {
                                cout << " *";
                                }
                            cout << endl;

                          for(k=1; k<=6-i; k++)
                                {
                                cout << " *";
                                }
                            cout << "  ";
                          for(k=1; k<=6-i; k++)
                                {
                                cout << " *";
                                }
                            cout << endl;

                          for(k=1; k<=us-i; k++)
                                {
                                cout << " *";
                                }
                            cout << endl;

                          //Mencetak "LOVE" piramida terbalik
                          for(i=0; i<us; i+=2)
                            {

                            for(j=1; j<=i; j++)
                                {
                                cout << " ";
                                }

                            for(k=1; k<=us-i; k++)
                                {
                                cout << " *";
                                }
                            cout << endl;
                            }


                        //Mencetak "U"
                          cout << endl;
                          //Mencetak "U" bagian atas
                          for(g=1;g<=2;g++)
                            {
                            cout << "  ";
                            for(h=1;h<=4;h++)
                                {
                                  cout << " *";
                                }
                            for(h=1;h<=6;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=4;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }
                          //Mencetak "U" bagian tengah
                          for(g=1;g<=bp;g++)
                            {
                            for(h=1;h<=4;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=2;h++)
                                {
                                  cout << " *";
                                }
                                for(h=1;h<=10;h++)
                                {
                                  cout << " ";
                                }
                                for(h=1;h<=2;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }
                          //Mencetak "U" bagian bawah
                          for(g=1;g<=1;g++)
                            {
                            for(h=1;h<=5;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=8;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }
                          for(g=1;g<=1;g++)
                            {
                            for(h=1;h<=7;h++)
                                {
                                  cout << " ";
                                }
                            for(h=1;h<=6;h++)
                                {
                                  cout << " *";
                                }
                            cout << endl;
                            }
                            cout << endl;
                    }
                    else
                    {
                    cout << "Input Tidak Valid, Silakan Ulangi Kembali" << endl;
                    }


            }
        else if (pilih == 3)
            {
                //PROGRAM MENGHITUNG UMUR BERDASARKAN TANGGAL LAHIR

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
                    umurbln1S = blnA-blnB;
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
                    cout << " Pasangan Anda Berumur : " << umurthnB-1 << " tahun " << umurbln1B << " bulan " << umurtglB << " hari " << endl;
                    cout << "\n Selisih Umur Anda dengan Pasangan Anda adalah : " << umurthnS << " tahun " << umurbln1S << " bulan " << umurtglS << " hari " << endl;

                    cout << "\n=======================================================" << endl;
            }
        else
        {
            cout << "\n=======================================================" << endl;
            cout << " Input Tidak Valid, Silakan Ulangi Kembali" << endl;
        }

 cout << "\n program selesai \n";
 cout << "\n=======================================================" << endl;
 cout << " Apakah Anda Ingin Mencoba Program Lainnya : "<<endl;
 cout << " Pilihan (y/n) ";
 cin >> ulang;
 }
 while (ulang=='y');
 cout << "\n=======================================================" << endl;
 cout << " Terima Kasih "<<endl;
 cout << "\n program selesai \n";




    return 0;
}
