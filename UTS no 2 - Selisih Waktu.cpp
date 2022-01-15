#include <iostream>

using namespace std;

int main()
{
     int jam_awal, menit_awal, detik_awal, jam_akhir, menit_akhir, detik_akhir, detik, menit, jam;

    cout<<"Masukkan Waktu Awal Percakapan : "<<endl;
    cout<<"Jam   = ";
    cin>>jam_awal;
    cout<<"menit = ";
    cin>>menit_awal;
    cout<<"detik = ";
    cin>>detik_awal;
    cout<<"Jam Pemberangkatan Pada Pukul = "<<jam_awal<<":"<<menit_awal<<":"<<detik_awal<<endl;
    cout<<endl;
    cout<<"Masukkan Waktu Akhir Percakapan : "<<endl;
    cout<<"Jam   = ";
    cin>>jam_akhir;
    cout<<"menit = ";
    cin>>menit_akhir;
    cout<<"detik = ";
    cin>>detik_akhir;
    cout<<"Jam datang pada Pukul = "<<jam_akhir<<":"<<menit_akhir<<":"<<detik_akhir<<endl;

    if ((detik_akhir-detik_awal)<0)
    {
        detik=(60+detik_akhir)-detik_awal;
    }
    else
    {
        detik=detik_akhir-detik_awal;
    }

    if ((menit_akhir-menit_awal)<0)
    {
        menit=(60+menit_akhir)-menit_awal;
    }
    else
    {
        menit=menit_akhir-menit_awal;
    }

    if ((jam_akhir-jam_awal)<0)
    {
        jam=(24+jam_akhir)-jam_awal;
    }
    else
    {
        jam=jam_akhir-jam_awal;
    }



    cout<<" \n Lama Percakapan : "<<endl;
    cout<<"Jam   = "<<jam<<endl;
    cout<<"Menit = "<<menit<<endl;
    cout<<"Detik = "<<detik<<endl;
    cout<<"Jadi lama waktu perjalanan = "<<jam<<":"<<menit<<":"<<detik;

    return 0;
}
