//PROGRAM MENGHITUNG JUMLAH DERET BILANGAN
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int c=-1, i, n, jumlah=0;


    //ALGORITMA
    cout << "PROGRAM MENGHITUNG JUMLAH DERET BILANGAN" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Masukkan jumlah sampai deret ke-n : ";
    cin >> n;

    cout << "Deret ke-" << n << " : ";

    for (int i=0; i<n; i++)
    {
        c+=2;
        cout << c << ", " ;
        jumlah = jumlah+c ;
    }

    cout << "\n Jumlah deret ke-" << n << " : ";
    cout << jumlah;

    return 0;
}
