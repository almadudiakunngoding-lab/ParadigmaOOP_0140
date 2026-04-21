#include <iostream>
using namespace std;

class barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalproduksi;

    void tampilspek(){
        cout << "nama barang: " << nama << endl;
        cout << "jumlah barang: " << jumlah << endl;
        cout << "kategiri barang : " << kategori << endl;
        cout << "tanggal produksi : " << tanggalproduksi << endl;
    }
};

int mian(){

    barang elektronik;
    barang nonelektroni;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalproduksi = "1945-08-11";
    elektronik.tampilspek();

    cout << endl;

    nonelektroni.nama = "supersemar";
    nonelektroni.jumlah = 1;
    nonelektroni.kategori = "non elektronik";
    nonelektroni.tanggalproduksi = "1970-30-11";
    nonelektroni.tampilspek();
}