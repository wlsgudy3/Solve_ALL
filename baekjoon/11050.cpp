#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // ����� �ӵ� ���
	cin.tie(nullptr); // C���� ����� ���� ��Ȱ��ȭ

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