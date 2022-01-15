// JUDUL : Program Validasi

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int a, x, y;
    y=0;

    //Algoritma
    cout << "\n Program untuk menentukan bilangan prima antara 50 sampai 500" << endl;
    cout << "\n Masukkan angka :  " ;
    cin >> a;
    cout << endl;

    for(x=1; x<=a; x++)
        {
          if(a%x==0)
          {
            y++;
          }
        }

    if(((y==2)&&(a>50)&&(a<500)))
    {
        cout << a << " adalah bilangan prima antara 50 sampai 500" << endl;
    }
    else if (y==2)
    {
        cout << a << " BUKAN bilangan prima antara 50 sampai 500" << endl;
    }
    else
    {
        cout << a << " BUKAN bilangan prima" << endl;
    }

    cout << "\n program selesai \n";

    return 0;
}
