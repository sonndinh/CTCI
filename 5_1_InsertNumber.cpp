#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;


// Insert M into N such that M starts at bit j and ends at bit i.
int insert(int M, int N, int i, int j) {
	int mask = ~((1 << (j+1)) - 1) | ((1 << i) - 1);
	N = N & mask;
	bitset<11> n(N);
	N = N | (M << i);
	return N;
}

int main() {
	int M = 19; // 10011
	int N = pow(2, 10); // 10000000000
	bitset<5> m_bset(M);
	bitset<11> n_bset(N);
	bitset<11> ret_bset(insert(M, N, 2, 6));

	cout << "M: " << m_bset << ", N: " << n_bset << endl;
	cout << "After insert: " << ret_bset << endl;
	return 0;
}
