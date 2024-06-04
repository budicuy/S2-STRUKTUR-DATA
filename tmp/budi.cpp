#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <conio.h>

using namespace std;
void biodata();
void menu();
void typeEffect(const char *text, int delay);
void progressCounter();
void countdown(int seconds);
void tutupProgram();

int main()
{
    system("cls");
    progressCounter();
    menu();
    return 0;
}

void countdown(int seconds)
{
    for (int i = seconds; i >= 0; --i)
    {
        cout << "Progam Akan Mati dalam " << i << " detik...\r";
        fflush(stdout);
        Sleep(1000); // Jeda 1 detik
    }
}

void tutupProgram()
{
    system("cls");
    cout << "=========================================================" << endl;
    cout << "                   TERIMA KASIH                          " << endl;
    cout << "               SEKIAN TERIMA GAJI!!!                     " << endl;
    cout << " Buah Pisang Dimakan Arfani, Hati pusang handak Bebini!!!" << endl;
    cout << "                      AHAYYYYY                           " << endl;
    cout << "=========================================================" << endl;

    fflush(stdout);
    Sleep(500); // Jeda 0.5 detik
    countdown(20);
    cout << "\n\n";
}

void progressCounter()
{
    printf("\n\n");
    for (int i = 1; i <= 100; ++i)
    {
        cout << "\r~ SEBENTAR LAGI LODING MAS BRO ...: " << i << "% ";
        Sleep(70);
    }

    cout << "\n\n\nLOADING SELESAI MASBRO!!!\n\n\n";
}

void menu()
{
    system("color 0A");
    cout << "   ⠛⠛⣿⣿⣿⣿⣿⡷⢶⣦⣶⣶⣤⣤⣤⣀⠀⠀⠀         " << endl;
    cout << "    ⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀        " << endl;
    cout << "    ⠀⠀⠉⠉⠉⠙⠻⣿⣿⠿⠿⠛⠛⠛⠻⣿⣿⣇⠀        " << endl;
    cout << "    ⠀⢤⣀⣀⣀⠀⠀⢸⣷⡄⠀⣁⣀⣤⣴⣿⣿⣿⣆        " << endl;
    cout << "    ⠀⠀⠀⠹⠏⠀⠀⠀⣿⣧⠀⠹⣿⣿⣿⣿⣿⡿⣿        " << endl;
    cout << "    ⠀⠀⠀⠀⠀⠀⠀⠀⠛⠿⠇⢀⣼⣿⣿⠛⢯⡿⡟        " << endl;
    cout << "    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠦⠴⢿⢿⣿⡿⠷⠀⣿⠀         " << endl;
    cout << "    ⠀⠀⠀⠀⠀⠀⠙⣷⣶⣶⣤⣤⣤⣤⣤⣶⣦⠃⠀        " << endl;
    cout << "    ⠀⠀⠀⠀⠀⠀⢐⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀        " << endl;
    cout << "    ⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀        " << endl;
    cout << "    ⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⢿⣿⣿⣿⣿⠟⠁           " << endl;

    cout << "\n\n========== MENU ==========" << endl;
    cout << "1. Keluar" << endl;
    cout << "2. Biodata" << endl;
    cout << "==============================" << endl;
    int pilihan;
    cout << "Pilih No 2 Dpt Makan Siang Gratis (>_<)" << endl;

    cout << "Masukkan pilihan  : ";
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        tutupProgram();
        break;
    case 2:
        biodata();
        break;
    }
}

void biodata()
{
    system("cls");
    const char *Nama = "Nama         : BUDIANNOR\n";
    const char *Kelas = "Kelas        : TI-2A\n";
    const char *NIM = "NIM          : C030323012\n";
    const char *Jurusan = "Jurusan      : Teknik ELektro\n";
    const char *Prodi = "Prodi        : D3 Teknik Informatika\n";
    const char *Universitas = "Universitas  : Politenik Negeri Banjarmasin\n";

    int delay = 50; // Delay dalam milidetik, bisa disesuaikan sesuai kebutuhan

    cout << "==================== BIODATA ====================" << endl;
    typeEffect(Nama, delay);
    typeEffect(Kelas, delay);
    typeEffect(NIM, delay);
    typeEffect(Jurusan, delay);
    typeEffect(Prodi, delay);
    typeEffect(Universitas, delay);
    cout << "=================================================" << endl;

    cout << "\n\nTekan enter untuk melanjutkan...\n\n";
    getche();

    system("cls");
    menu();
}

void typeEffect(const char *text, int delay)
{
    while (*text)
    {
        printf("%c", *text++);
        fflush(stdout); // Memastikan output ditampilkan segera
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}
