#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화

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


	int pivot = 0; // input 순회할 동안, 소수 어디까지 갔는지 가리킬 것
	int count = 0;
	for (int i = 0; i < inputs.size(); i++) {
		if (inputs[i] == nums[pivot]) // 소수인 것
			count++;
		else if (inputs[i] > nums[pivot]) {
			while (inputs[i] > nums[pivot])
				pivot++;
			i--;
		}
			
	}

	cout << count << '\n';

	// 1. 1000까지의 모든 소수를 구하기
	// 2. 숫자를 받아서 오름차순 정렬
	// 3. 소수들과 비교하며 개수 세기

	return 0;
}