#include <iostream>
using namespace std;

int main ()
{
    cout << "TUGAS 1" << endl;
    cout << "No 1" << endl;

    cout << "NPM          : 2210631170013" << endl;
    cout << "Nama Lengkap : Bhanu Azizi" << endl;
    cout << "Umur         : 18 Tahun" << endl;
    cout << "Kelas        : 1B Informatika" << endl;
    cout << "Hobi         : Futsal" << endl;
    cout << "Cita cita    : Ingin menjadi seorang programmer dan bekerja di perusahaan besar" << endl;
    cout << " " << endl;

    cout << "No 2" << endl;
    cout << "* Dengan Variabel Sementara" << endl;
    int a, b, temp;
    cout << "Sebelum ditukar :\nA = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;


    cout << "\nSetelah ditukar :\nA= " <<a<< "\nB= " <<b<< endl;
    cout<<endl;

    cout << "* Tanpa Variabel Sementara" << endl;
    int c,d;
    cout << "Sebelum ditukar :\nC = ";
    cin >> c;
    cout << "D = ";
    cin >> d;
    cout << endl;

    c=c+d;
    d=c-d;
    c=c-d;

    cout << "Setelah ditukar :\nC = "<<c<< "\nD = "<<d<< endl;
}



