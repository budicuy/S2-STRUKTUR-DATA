#include <iostream>
#include <string.h>

using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main()
{
    mahasiswa budi;
    budi.nim = "C030323012";
    budi.nama = "BUDIANNOR";
    budi.alamat = "Jl. Antasan Kecil Timur dalam";
    budi.ipk = 3.5;

    cout << budi.nim << endl;
    cout << budi.nama << endl;
    cout << budi.alamat << endl;
    cout << budi.ipk << endl;
}