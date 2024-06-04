#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    char pl;
    do
    {
        dMenu();
        pl = getch();
    } while (pl != '5');

    switch (pl)
    {
    case '5':
        break;

    default:
        system("cls");
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        break;
    case '1':
        dPertama();
        break;
        }
}

void dMenu()
{
    system("cls");
    cout << "Aplikasi Template Menu" << endl;
    cout << "1. Menu Pertama" << endl;
    cout << "2. Menu Kedua" << endl;
    cout << "3. Menu Ketiga" << endl;
    cout << "4. Menu Keempat" << endl;
    cout << "5. Exit" << endl;
    cout << "Masukan Angka : ";
}

void dPertama()
{
    system("cls");
    cout << "Hallo Saya Menu Pertama" << endl;
    getch();
}
