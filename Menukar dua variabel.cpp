#include <iostream>
using namespace std;
int main()
{
    //KAMUS
    int a = 20,
        b = 15,
        x;  // Variabel x sebagai variabel pembantu

    //ALGORITMA
    cout << " Program Menukar Nilai Dua Variabel Menggunakan Variabel Pembantu" << endl;
    cout << "==================================================================" << endl;
    cout << "  Data Variabel Sebelum Pertukaran" << endl;
    cout << "   Nilai a = " << a << endl;
    cout << "   Nilai b = " << b << endl;

        //Rumus Pertukaran
            x = a ;  //meng-copy nilai variabel a ke dalam x
            a = b ;  //mengganti nilai variabel a menjadi nilai variabel b
            b = x ;  //meng-copy nilai variabel a pada x ke dalam b
                     //dengan ini variabel a dan b telah bertukar nilai

    cout << "==================================================================" << endl;
    cout << "  Data Variabel Setelah Pertukaran" << endl;
    cout << "   Nilai a : " << a << endl;
    cout << "   Nilai b : " << b << endl;

    return 0;
}
