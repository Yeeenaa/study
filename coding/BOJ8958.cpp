#include<iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	int k[80] = {};
	for (int i = 0; i < c; i++) {
		string ox;
		cin >> ox;
		int cnt = 0;
		int sum = 0;
		for (auto a : ox) {
			if (a == 'O') cnt++;
			else {
				for (int k = 1; k <= cnt; k++) {
					sum += k;
				}
				cnt = 0;
			}
		}
		for (int k = 1; k <= cnt; k++) {
			sum += k;
		}

		cout << sum << "\n";
	}
}