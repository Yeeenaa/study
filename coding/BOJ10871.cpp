#include<iostream>
using namespace std;

int main() {
	int X, N;
	cin >> N >> X;
	//int* a = new int[N];
	int a[10005];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		if (a[i] < X) cout << a[i]<<' ';
	}
}