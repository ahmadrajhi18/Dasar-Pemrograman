//Program mencetak kata sebanyak n ( n<1000 )
#include <iostream>

using namespace std;

int main()
{
//Cara Pertama

    //KAMUS
    int y, z;
    string b;


    //ALGORITMA
    cout << "\n Masukkan kata :  " ;
    cin >> b;
    cout << " Masukkan jumlah perulangan (max=1000) :  " ;
    cin >> z;
    y = 1000-z;

    do
{
    cout << b << endl;
    y=y+1;
}
    while (y<=1000);


//Cara Kedua

    //KAMUS
    int n, m;
    string a;


    //ALGORITMA
    cout << "\n Masukkan kata :  " ;
    cin >> a;
    cout << " Masukkan jumlah perulangan :  " ;
    cin >> m;
    n = 1000-m;

    while (n<=1000)
{
    cout << a << endl;
    n++;
}
return 0;
}
