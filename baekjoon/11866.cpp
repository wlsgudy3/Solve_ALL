#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화
	
	int N, K;

	cin >> N >> K;

	int pool[1001];
	vector<int> result;

	for (int i = 1; i <= N; i++) {
		pool[i] = 1;
	}

	int cursor = 0;

	for (int i = 0; i < N; i++) {
		int count = K;

		while (count > 0) {
			cursor++;

			if (cursor > N) {
				cursor %= N;
			}

			if (pool[cursor] != 0)
				count--;
		}

		pool[cursor] = 0;
		result.push_back(cursor);
	}
	
	for (int i = 0; i < result.size(); i++) {
		if (i == 0)
			cout << "<";
		cout << result[i];
		if (i != result.size() - 1)
			cout << ", ";
		else
			cout << ">";
	}


	return 0;

	// 다 구현하고 보니까, 리스트로 구현하면 더 좋을 것 같은 느낌
}