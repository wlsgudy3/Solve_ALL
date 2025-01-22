#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// next_permutation : 오름차순으로 정렬된 데이터에만 사용해야함.

void swap(int& a, int& b);
void printV(vector<int>& v);
void makePermutation(int n, int r, int depth);

vector<int> v;

int main() {
	int a[] = {1, 2, 3};

	do {
		for (int i : a) cout << i << " ";
		cout << '\n';
	} while (next_permutation(&a[0], &a[0] + 3)); // &a[0] 대신 a로 써도 됨.

	// 또는
	cout << "-----------------\n";
	vector<int> b = { 1, 2, 3 };

	sort(b.begin(), b.end()); // 오름차순 정렬 (일반적인 상황에서)

	do {
		for (int i : b) cout << i << " ";
		cout << '\n';
	} while (next_permutation(b.begin(), b.end()));

	cout << "-----------------\n";
	// 재귀 함수로 만드는 방법

	for (int i = 1; i < 4; i++) v.push_back(i);
	makePermutation(3, 3, 0); // depth 시작은 0
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void printV(vector<int>& v) {
	for (int i : v) cout << i << " ";
	cout << "\n";
}

void makePermutation(int n, int r, int depth) {
	if (r == depth)
		printV(v);

	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		makePermutation(n, r, depth + 1);
		swap(v[i], v[depth]); // 원상복귀
	}
}