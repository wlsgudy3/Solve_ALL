#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // ����� �ӵ� ���
	cin.tie(nullptr); // C���� ����� ���� ��Ȱ��ȭ

	int N, S, M, L, XL, XXL, XXXL, T, P;

	cin >> N;

	cin >> S >> M >> L >> XL >> XXL >> XXXL;

	cin >> T >> P;

	int cntS = (S % T == 0 ? S / T : S / T + 1);
	int cntM = (M % T == 0 ? M / T : M / T + 1);
	int cntL = (L % T == 0 ? L / T : L / T + 1);
	int cntXL = (XL % T == 0 ? XL / T : XL / T + 1);
	int cntXXL = (XXL % T == 0 ? XXL / T : XXL / T + 1);
	int cntXXXL = (XXXL % T == 0 ? XXXL / T : XXXL / T + 1);

	cout << (cntS + cntM + cntL + cntXL + cntXXL + cntXXXL) << '\n';
	cout << N / P << " " << N % P << '\n';


	return 0;
}