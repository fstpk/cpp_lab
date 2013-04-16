#include <iostream>
using namespace std;

int main() {
	cout << "Enter mounth number (e.g. 01,3,11):" << endl;
	int number;
	cin >> number;

	switch (number) {
		case 1:
		case 2:
		case 12:
			cout << "winter" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "spring" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "summer" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "autumn" << endl;
			break;
		default:
			cout << "Bad number" << endl;
			break;
	}
	return 0;
}
