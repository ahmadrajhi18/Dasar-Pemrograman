// JUDUL : Program Validasi (Analisis Dua Kasus)

#include <iostream>
using namespace std;

int main()
{
//Kamus
int a;

//Algoritma
cout << "\n Program untuk memasukkan bilangan bulat kelipatan 3 lebih dari 20" << endl;
cout << "\n Masukkan angka : " ;
cin >> a;
if((a%3==0)&&(a>20))
{
cout << "\n bilangan " << a << " merupakan bilangan bulat genap kelipatan 3 lebih dari 20" << endl;
}
else
{
cout << "\n bilangan " << a << " BUKAN merupakan bilangan bulat genap kelipatan 3 lebih dari 20" << endl;
}
cout << "\n program selesai \n";

return 0;
}
