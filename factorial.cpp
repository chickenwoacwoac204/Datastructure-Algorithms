#include <iostream>
using namespace std;

long long factor(int n) {
	if (n<=0) {
		return 1;
	}
	return n*factor(n-1);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "n! = " << factor(n);
}