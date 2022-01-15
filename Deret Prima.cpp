//PROGRAM MENGHITUNG JUMLAH DERET BILANGAN PRIMA
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int in, out, cou, faktor, jumlah;

    //ALGORITMA
    cout << " PROGRAM MENGHITUNG JUMLAH DERET BILANGAN PRIMA" << endl;
    cout << " ----------------------------------------------" << endl;
    cout << " Masukkan jumlah sampai deret ke-n : ";
    cin >> in;
    cout << " ----------------------------------------------" << endl;
    cout << " Bilangan prima : ";
    out=0;
    cou=2;
    jumlah=0;

    while (out<in)
    {

    faktor=0;

    for (int i=1; i<=cou; i++)
    {
        if(cou%i==0)
        {
            faktor++;
        }
    }
        if (faktor==2)
        {
        cout <<" "<< cou <<" " ;
        out++;
        jumlah+=cou;
        }
    cou++;
    }

    cout << "\n Jumlah deret bilangan prima sampai ke "<<in<<" adalah : " ;
    cout << jumlah << endl;

    return 0;
}
