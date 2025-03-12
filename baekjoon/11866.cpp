#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false); // ����� �ӵ� ���
	cin.tie(nullptr); // C���� ����� ���� ��Ȱ��ȭ
	
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

	// �� �����ϰ� ���ϱ�, ����Ʈ�� �����ϸ� �� ���� �� ���� ����
}