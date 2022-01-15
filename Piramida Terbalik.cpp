#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Piramida Bintang Terbalik  ##" << endl;
  cout << "=============================================" << endl;
  cout << endl;

//KAMUS
  int bl,bp,us,us2,g,h,i,j,k;

//ALGORITMA
  cout << "Anda lahir pada bulan ke : ";
  cin >> bl ;
  cout << endl;

  if((bl>0)&&(bl<=12))
    {
        cout << "CONGRATULATION!! .. " << endl;

  us=13;
  us2=(us-1)/2;
  bp=6;

        //Mencetak "I"
          cout << endl;
          for(g=1;g<=2;g++)
            {
            for(h=1;h<=9;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=4;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }

            for(g=1;g<=bp;g++)
            {
            for(h=1;h<=11;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=2;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }
          for(g=1;g<=2;g++)
            {
            cout << "   ";
            for(h=1;h<=bp;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=4;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }


        //Mencetak "LOVE"
          cout << endl;
          cout << "  ";
          for(k=1; k<=us2-2-i; k++)
                {
                cout << " *";
                }

            cout << "      ";

          for(k=1; k<=us2-2-i; k++)
                {
                cout << " *";
                }
            cout << endl;


          for(k=1; k<=us2-i; k++)
                {
                cout << " *";
                }
            cout << "  ";

          for(k=1; k<=us2-i; k++)
                {
                cout << " *";
                }
            cout << endl;


          for(k=1; k<=us-i; k++)
                {
                cout << " *";
                }
                cout << endl;


          for(i=0; i<us; i+=2)
            {

            for(j=1; j<=i; j++)
                {
                cout << " ";
                }

            for(k=1; k<=us-i; k++)
                {
                cout << " *";
                }
            cout << endl;
            }


        //Mencetak "U"
          cout << endl;
          for(g=1;g<=2;g++)
            {
            cout << "  ";
            for(h=1;h<=4;h++)
                {
                  cout << " *";
                }
            for(h=1;h<=6;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=4;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }

            for(g=1;g<=bp;g++)
            {
            for(h=1;h<=4;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=2;h++)
                {
                  cout << " *";
                }
                for(h=1;h<=10;h++)
                {
                  cout << " ";
                }
                for(h=1;h<=2;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }

          for(g=1;g<=1;g++)
            {
            for(h=1;h<=5;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=8;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }
          for(g=1;g<=1;g++)
            {
            for(h=1;h<=7;h++)
                {
                  cout << " ";
                }
            for(h=1;h<=6;h++)
                {
                  cout << " *";
                }
            cout << endl;
            }
            cout << endl;
    }
    else
    {
    cout << "Inputan Tidak Valid, Silakan Ulangi Kembali" << endl;
    }


  return 0;
}
