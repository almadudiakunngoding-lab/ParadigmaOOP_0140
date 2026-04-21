#include <iostream>
using namespace std;

class mahasiswa{
    public : 
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "NAMA : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class
