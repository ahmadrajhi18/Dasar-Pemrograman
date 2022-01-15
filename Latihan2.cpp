#include <iostream>

using namespace std;

int main()
{
     /* DEKLARASI AWAL */
    int i;
    const float x = 12.5;
    int Hasil, Output1, Output2;


     /* ALGORITMA */
    cout << "Masukkan (i) :  ";
    cin >> i;

    Hasil = i * 10 ;
    Output1 = i;
    Output2 = x+(5.4);

    cout << "\n Hasilnya adalah : " << Hasil <<  endl;
    cout << "\n Output (i) adalah : " << Output1 <<  endl;
    cout << "\n Output (x+5.4) adalah : " << Output2 <<  endl;


    return 0;
}
