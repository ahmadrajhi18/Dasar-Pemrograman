// JUDUL : Program Untuk Menentukan Huruf atau Bukan

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    char a;

    //Algoritma
    cout << "\n Program Untuk Menentukan Huruf atau Bukan" << endl;
    cout << "\n Input Karakter  :  " ;
    cin >> a;
    if (a>= 'a' && a<= 'z')
    {
        cout << a << " adalah huruf" << endl;
    }
    else if (a>= 'A' && a<= 'Z')
    {
        cout << a << " adalah huruf" << endl;
    }
    else
    {
        cout << a << " adalah bukan huruf" << endl;
    }
    cout << "\n program selesai \n";

    return 0;
}
