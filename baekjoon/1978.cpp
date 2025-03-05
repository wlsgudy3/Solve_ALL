#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // ����� �ӵ� ���
	cin.tie(nullptr); // C���� ����� ���� ��Ȱ��ȭ

	int N;
	cin >> N;

	vector<int> nums;
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(7);
	nums.push_back(11);
	for (int i = 12; i < 1001; i++) {
		bool isPrime = true;
		for (int j = 0; j < nums.size(); j++) {
			if (i % nums[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			nums.push_back(i);
	}

	vector<int> inputs;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		inputs.push_back(num);
	}

	for (int i = 0; i < nums.size(); i++) {
		//cout << nums[i] << '\n';
	}


	sort(inputs.begin(), inputs.end());


	int pivot = 0; // input ��ȸ�� ����, �Ҽ� ������ ������ ����ų ��
	int count = 0;
	for (int i = 0; i < inputs.size(); i++) {
		if (inputs[i] == nums[pivot]) // �Ҽ��� ��
			count++;
		else if (inputs[i] > nums[pivot]) {
			while (inputs[i] > nums[pivot])
				pivot++;
			i--;
		}
			
	}

	cout << count << '\n';

	// 1. 1000������ ��� �Ҽ��� ���ϱ�
	// 2. ���ڸ� �޾Ƽ� �������� ����
	// 3. �Ҽ���� ���ϸ� ���� ����

	return 0;
}