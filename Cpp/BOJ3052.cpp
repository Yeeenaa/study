#include<iostream>
using namespace std;

int main() {
	int a[42] = {};
	for (int i = 0; i < 10; i++) {
		int s;
		cin >> s;
		int k = s % 42;
		a[k]++;
	}
	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (a[i] != 0) cnt++;
	}
	cout << cnt;

}		