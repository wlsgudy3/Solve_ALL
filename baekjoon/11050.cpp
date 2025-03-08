#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화

	int N, K;

	cin >> N >> K;

	int rst = 1;
	int temp = 1;
	for (int i = 1; i <= K; i++) {
		rst *= N;
		N--;
		temp *= i;
	}
	
	rst /= temp;
	cout << rst << '\n';
}