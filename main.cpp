#include <iostream>
using namespace std;

int LSegitiga(int alas, int tinggi);
void cetak();

int main()
{
    system("cls");
    cetak();

    return 0;
}

void cetak()
{
    cout << "Luas segitiga adalah : " << LSegitiga(7, 5);
}

int LSegitiga(int alas, int tinggi)
{
    int luas = (alas * tinggi) / 2;
    return luas;
}