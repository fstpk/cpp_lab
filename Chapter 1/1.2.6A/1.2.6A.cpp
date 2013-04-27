#include <iostream>
using namespace std;

int main() {
	cout << "Enter [x]:" << endl;
	int a;
	cin >> a;
	while (a < 0 || a > 10) {
		cout << "And again!" << endl;
		cin >> a;
	}
	cout << a * a * a << endl;
	return 0;
}
