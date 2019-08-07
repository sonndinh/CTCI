#include <iostream>
#include <string>
using namespace std;


// Convert a real number in (0, 1) to a binary string.
// The input number is represented using at most 32 characters..
string bin_to_string(double x) {
	string ret = "0.";
	int count = 0;
	
	while (x > 0) {
		x *= 2;
		if (x >= 1.0) {
			ret += "1";
			x -= 1.0;
		} else {
			ret += "0";
		}
		++count;
		if (count >= 32 && x > 0) {
			cout << "INFO: Cannot represent using 32 characters!" << endl;
			break;
		}
	}

	return ret;
}

int main() {
	double x = 0.6;
	string str = bin_to_string(x);
	cout << "Binary representation of " << x << ": " << str << endl;
	return 0;
}
