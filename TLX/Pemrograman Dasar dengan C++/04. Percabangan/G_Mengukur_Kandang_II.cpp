#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    string terbesar, terkecil;

    if (A > B && A > C) {
        terbesar = "A";

        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (B > A && B > C) {
        terbesar = "B";

        if (A < C) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else {
        terbesar = "C";

        if (A < B) {
            terkecil = "A";
        } else {
            terkecil = "B";
        }
    }

    cout << terbesar << endl;
    cout << terkecil << endl;
}
