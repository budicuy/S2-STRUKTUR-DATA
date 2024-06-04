#include <iostream>
#include <conio.h>

using namespace std;

void dMenu();
void dPertama();

int main()
{

    char pl;
    do
    {
        dMenu();
        pl = getch();
        switch (pl)
        {
        case '1':
            dPertama();
            break;
        case '2':
            system("cls");
            cout << "Hallo Saya Menu Kedua" << endl;
            getch();
            break;
        case '3':
            system("cls");
            cout << "Hallo Saya Menu Ketiga" << endl;
            getch();
            break;
        case '4':
            system("cls");
            cout << "Hallo Saya Menu Keempat" << endl;
            getch();
            break;
        case '5':
            system("cls");
            cout << "Terima Kasih" << endl;
            break;
        default:
            system("cls");
            cout << "Pilihan tidak ada" << endl;
            getch();
            break;
        }
    } while (pl != '5');
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
