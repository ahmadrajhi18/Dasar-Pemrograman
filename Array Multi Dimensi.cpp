#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << " Penjumlahan Array " << endl;
    //KAMUS
    int ArrA[3][3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int ArrB[3][3][3]= {{1,1,1},{1,1,1},{1,1,1}};

    //ALGORITMA
        //OUTPUT
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                for (int k=0; k<3; k++)
                {
                    cout << setw[4] << ArrA[i][j][k] << endl;
                }
            }
        }


        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                for (int k=0; k<3; k++)
                {
                    cout << setw[4] << ArrA[i][j][k] << endl;
                }
            }
        }


    return 0;
}
