#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int total_bulan = 0;

    int total_luas_kandang = luas_kandang;

    while (total_bulan < 10) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;

        total_bulan += 1;
    }

    cout << total_luas_kandang << endl;
}
