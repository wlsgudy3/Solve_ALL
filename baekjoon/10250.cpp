#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화

	int T, H, W, N;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		int floor = (N % H);
		if (floor == 0)
			floor = H * 100;
		else
			floor = floor * 100;

		int num = (N - 1) / H + 1;

		cout << floor + num << '\n';
	}



	return 0;
}