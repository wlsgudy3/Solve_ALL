#include <iostream>

using namespace std;

int fact(int n) {
	if (n == 1 || n == 0)
		return 1;
	return n * fact(n - 1);
}

int fact1(int n) { // 반복문으로 구현하는 것이 좋다.
	int rst = 1;
	for (int i = 2; i <= n; i++) {
		rst *= i;
	}
	return rst;
}


int fibo(int n) {
	if (n == 1 || n == 0)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	cout << fact(5) << endl;
	cout << fact1(5) << endl;
	cout << fibo(5) << endl;

}