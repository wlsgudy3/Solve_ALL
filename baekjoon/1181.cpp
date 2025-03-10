#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<string>& arr, int left, int mid, int right) {

	int n1 = mid - left + 1;
	int n2 = right - mid;

	vector<string> L(n1), R(n2);

	for (int i = 0; i < n1; i++) {
		L[i] = arr[left + i];
	}

	for (int i = 0; i < n2; i++) {
		R[i] = arr[mid + 1 + i];
	}

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2) {
		if (L[i].size() < R[j].size()) {
			arr[k] = L[i];
			i++;
			k++;
		}
		else if (L[i].size() > R[j].size()) {
			arr[k] = R[j];
			j++;
			k++;
		}
		else { // If string size is same
			if (L[i] < R[j]) {
				arr[k] = L[i];
				k++;
				i++;
			}
			else {
				arr[k] = R[j];
				k++;
				j++;
			}
		}

	}

	while (i < n1) {
		arr[k++] = L[i++];
	}

	while (j < n2) {
		arr[k++] = R[j++];
	}

}

void mergeSort(vector<string>& arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(nullptr); // C와의 입출력 동기 비활성화
	
	int N;

	cin >> N;


	vector<string> arr;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		arr.push_back(temp);
	}

	mergeSort(arr, 0, arr.size() - 1);
	
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << '\n';
	}


	return 0;
}