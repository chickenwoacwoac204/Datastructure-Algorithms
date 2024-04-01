#include <iostream>
using namespace std;

long double exponen(int n, double a) {
	if (n<1) {
		return 1;
	}
	return a*exponen(n-1,a);
}

int main() {
	int n; 
	double a; 
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap a: ";
	cin >> a;
	cout << "a^n = " << exponen(n, a);
}