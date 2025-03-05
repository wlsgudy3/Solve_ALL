#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화

	string num;

	while (true) {
		cin >> num;

		int len = num.length();
		bool pal = true;

		if (num[0] == '0')
			break;

		if (len % 2) { // Ȧ��
			for (int i = 0; i < len / 2 + 1; i++) {
				if (num[i] != num[len - 1 - i])
					pal = false;
			}
		}
		else { // ¦��
			for (int i = 0; i < len / 2; i++) {
				if (num[i] != num[len - 1 - i])
					pal = false;
			}
		}
		
		if (pal)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';

	}


	return 0;
}