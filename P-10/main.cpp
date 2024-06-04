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