#include <iostream>

using namespace std;

int main()
{
    int b, k, n, setB;

    cout << " Program menampilkan Piramida Horizontal" << endl;
    cout << " Masukkan jumlah baris (angka ganjil) = " ;
    cin >> n ;
    cout << endl;

    if (n%2==0)
    {
        cout << "Input tidak valid" << endl;
    }
    else
    {
        setB=(n+1)/2;
    }

    for (b=1; b<setB; b++)
    {
        for (k=1; k<=b; k++)
        {
            cout  << " *";
        }
        cout << endl;
    }
    for (b=1; b<=setB; b++)
    {
        for (k=b; k<=setB; k++)
        {
            cout  << " *";
        }
        cout << endl;
    }

    return 0;
}

