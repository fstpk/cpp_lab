#include <iostream>
#include <cmath>
using namespace std;

//int nyawka(int x) { return x <0? -x: x; }
int main() {
	cout << "Function: a*b" << endl << "Enter [a]:" << endl;
	int a;
	cin >> a;

	cout << "Enter [b]:" << endl;
	int b;
	cin >> b;

	if (a == 0 || b == 0) {
		cout << "result: 0" << endl;
		return 0;
	}

	int res = 0;
	//baka mod!
	int mod_a = abs(a);
	int mod_b = abs(b);
	for (int i = 0; i < mod_a; ++i) { res += mod_b; }
	
	if ((a > 0) != (b > 0)) { res = -res; }

	cout << "result: " << res << endl;
	return 0;
}
