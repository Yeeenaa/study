#include<iostream>
using namespace std;

int func3(int N) {
	for (int i = 0; i <= sqrt(1000000000); i++) {
		if (N == i * i) return 1;
	}
	return 0;
}

/*
int func3(int N) {
	for (int i = 0; i * i <= N; i++) {
		if (i * i == N) return 1;
	}
	return 0;
}
*/

int main() {
	cout << func3(9);
	cout << func3(693953651);
	cout << func3(756580036);
}