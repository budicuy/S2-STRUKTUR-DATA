#include <iostream>
using namespace std;

int main()
{
    int nilai[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai ke -" << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << "\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Array dengan index [" << i << "] = " << nilai[i] << "\n";
    }

    return 0;
}
