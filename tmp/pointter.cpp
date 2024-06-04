#include <iostream>
using namespace std;

int main()
{
    int *alamat;
    int value = 27;
    alamat = &value;

    cout << "Nilai dari value: " << &value << endl;
    cout << "Alamat dari value: " << alamat << endl;

    return 0;
}