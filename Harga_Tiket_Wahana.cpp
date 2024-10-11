#include <iostream>
using namespace std;

int main() {
	int umur;
	cin >> umur;
	if (umur < 13) {
		cout << "Rp 15.000";
	}
	else if (umur >= 13 && umur <= 17) {
		cout << "Rp 25.000";
	}
	else {
		cout << "Rp 35.000";
	}
	return 0;
}
