#include<iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int s[100] = {};
	int q[1000000] = {};
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	int sum = 0;
	int l = 0;
	for (int i = 0;i < (N-2); i++) {
		for (int j = i + 1; j < (N - 1); j++) {
			for (int k = j + 1; k < N; k++) {
				sum = s[i] + s[j] + s[k];
				if (sum <= M) {
					q[l] = sum;
					l++;
				}
				//cout << s[i] + s[j] + s[k]<<' ';
			}
		}

	}
	int min = 100000;
	for (int i = 0; i < l; i++) {
		if ((M - q[i]) < min) min = (M - q[i]);
	}
	cout << M - min;
}