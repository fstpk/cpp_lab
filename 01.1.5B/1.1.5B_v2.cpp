#include <iostream>
using namespace std;

int nyawka(int x) { return x <0? -x: x; }

int main() {
	cout << "Function: f=|2x-|x-3||" << endl << "Enter [x]:" << endl;
	int x;
	cin >> x;
	int result = nyawka(x*2-nyawka(x-3));
	cout << "result: " << result << endl;
	return 0;
}