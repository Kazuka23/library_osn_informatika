#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        
        if (luas % 2 != 0) {
            continue;
        }
        
        bool kuadrat_sempurna = false;

        for (int k = 1; k <= luas; k++) {

            if (luas == k*k) {
                kuadrat_sempurna = true; break;
            }
        }

        if (kuadrat_sempurna) {
            cout << luas << endl;
            break;
        }
    }
}
