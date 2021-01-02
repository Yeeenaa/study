#include<iostream>
#include<queue>
using namespace std;

int main() {
	int N;
	queue<int> Q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string S;
		cin >> S;
		if (S == "push") {
			int X;
			cin >> X;
			Q.push(X);
		}
		else if (S == "pop") {
			if (Q.empty() == 1) cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (S == "size") {
			cout << Q.size() << '\n';
		}
		else if (S == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (S == "front") {
			if (Q.empty() == 1) cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}
		else {
			if (Q.empty() == 1)cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}

	}
}