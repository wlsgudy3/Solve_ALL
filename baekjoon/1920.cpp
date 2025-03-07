#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // ����� �ӵ� ���
	cin.tie(nullptr); // C���� ����� ���� ��Ȱ��ȭ

	vector<int> nums;
	int N, M;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;

		nums.push_back(temp);
	}

	sort(nums.begin(), nums.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;

		// Binary Search
		int pivot = nums.size() / 2;
		int min = 0;
		int max = nums.size();


		while (true) {
			if (nums[pivot] == temp) {
				cout << "1\n";
				break;
			}
			else if (nums[pivot] < temp) {
				if (max - min <= 1) {
					cout << "0\n";
					break;
				}
				min = pivot;
				pivot = (pivot + max) / 2;
			}
			else {
				if (max - min <= 1) {
					cout << "0\n";
					break;
				}
				max = pivot;
				pivot = (min + pivot) / 2;
			}
		}
	}

	


	return 0;
}