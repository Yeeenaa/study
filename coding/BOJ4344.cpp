#include<iostream>
using namespace std;
int main() {
	int c;

	cin >> c;
	for (int i = 0; i < c; i++) {
		int n;
		cin >> n;
		double per = 0;
		int sum = 0, avg = 0;
		int g[1000] = {};
		int m = 0;
		for (int j = 0; j < n; j++) {
			cin >> m;
			g[j] = m;
			sum += m;
		}
		avg = sum / n;
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (g[j] > avg) cnt++;
		}
		per = (double)cnt / n * 100;
		//	cout << per << "%\n";
		printf("%.3f%%\n", per);
	}
}