#include <iostream>
using namespace std;

int main() {
	int jantan, betina;
	jantan = 63;
	betina = 192;
 
	betina = betina + jantan;
	jantan = jantan - (jantan / 3);
 
	jantan = jantan + 255;
	betina = 255 - 10;
 
	cout << jantan + betina << endl;
}
