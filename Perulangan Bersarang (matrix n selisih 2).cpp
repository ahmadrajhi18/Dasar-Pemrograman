//Program untuk menampilkan matriks r x c yang diawali oleh n dengan selisih 2
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //KAMUS
    int n,a,b,column,row;



    //ALGORITMA
    cout<<" Program untuk menampilkan matriks a x b yang diawali oleh n dengan selisih 2"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<" Masukkan angka awal :  ";
    cin>>n;
    cout<<" Masukkan jumlah kolom (a) :  ";
    cin>>column;
    cout<<" Masukkan jumlah baris (b) :  ";
    cin>>row;

    for (a=0;a<column;a++)
        {
        for (b=0;b<row;b++)
            {
            cout << setw(3) << n << " ";
            n+=2;
            }
        cout<<endl;
        }


    return 0;
}
