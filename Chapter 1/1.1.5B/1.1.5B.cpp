#include <iostream>
using namespace std;

// f = | 2x - | x - 3 | |

int main() {
	cout << "Function: f=|2x-|x-3||" << endl;
	cout << "Enter [x]:\n";
	
	int X;
	cin >> X;
	// |x| == (x < 0) ? -x : x
	int Y = X-3;
	int modY = (Y < 0) ? -Y : Y;
	
	int Result = 2*X-modY;
	int modResult = (Result < 0) ? -Result : Result;
	
	cout << " result : " << Result << endl;
	cout << "|result|: " << modResult << endl;
	
	return 0;
}