#include <iostream>
using namespace std;

int main()
{
    int harga;
    double ppn;
    double total;

    cout << "Masukkan harga sebelum dikenai PPN 11%: " << endl;
    cin >> harga;

    ppn = 0.11 * harga;

    total = harga + ppn;

    cout << "Harga setelah dikenai PPN 11%: " << total << endl;

    return 0;
}