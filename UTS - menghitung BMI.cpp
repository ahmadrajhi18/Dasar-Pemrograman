// JUDUL : Program Menghitung BMI Index

#include <iostream>

using namespace std;

int main ()
{
    //Kamus
    float TBm, TBcm, BB, BMI;

    //Algoritma
    cout << "\n Program Menghitung BMI Index" << endl;
    cout << "\n Input Berat Badan (kg)  :  " ;
    cin >> BB;
    cout << "\n Input Tinggi Badan (cm) :  " ;
    cin >> TBcm;

    TBm = TBcm/100;
    BMI = BB/(TBm*TBm);

    cout << "\n Nilai BMI Anda : " << BMI << endl;

    if (BMI < 18.5)
    {
        cout << " \n Anda termasuk kategori = Kurus" << endl;
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        cout << " Anda termasuk kategori = Normal/Ideal" << endl;
    }
    else if (BMI >= 25 && BMI < 30)
    {
        cout << " Anda termasuk kategori = Kelebihan Berat Badan" << endl;
    }
    else if (BMI >= 30)
    {
        cout << " Anda termasuk kategori = Kegemukan" << endl;
    }
    else
    {
        cout << " Input Tidak Valid" << endl;
    }
    cout << "\n program selesai \n";

    return 0;
}
