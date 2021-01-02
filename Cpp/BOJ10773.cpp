#include<iostream>
#include<stack>
using namespace std;

int main() {
	int K;
	cin >> K;
	stack<int> S;

	for (int i = 0; i < K; i++) {
		int n;
		cin >> n;
		if (n == 0) S.pop();
		else S.push(n);
	}
	int sum = 0;

	while (S.empty() != 1) {
		sum += S.top();
		S.pop();
	}
	cout << sum;
}