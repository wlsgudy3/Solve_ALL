#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화

	int N, M;
	
	cin >> N >> M;

	unordered_map<int, string> num_to_name; // 번호 -> 이름
	unordered_map<string, int> name_to_num; // 이름 -> 번호
	string temp;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		num_to_name[i + 1] = temp;
		name_to_num[temp] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		cin >> temp;

		if (isdigit(temp[0]))
			cout << num_to_name[stoi(temp)] << '\n';
		else
			cout << name_to_num[temp] << '\n';
	}

	return 0;
}