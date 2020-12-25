#include<iostream>
#include<deque>
using namespace std;

int main() {
	deque<int> DQ;
	string st;
	int N, X;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> st;
		if (st == "push_front") {
			cin >> X;
			DQ.push_front(X);
		}
		else if (st == "push_back") {
			cin >> X;
			DQ.push_back(X);
		}
		else if (st == "pop_front") {
			if (DQ.empty() == 1)cout << -1 << '\n';
			else {
				cout << DQ.front() << '\n';
				DQ.pop_front();
			}
		}
		else if (st == "pop_back") {
			if (DQ.empty() == 1)cout << -1 << '\n';
			else {
				cout << DQ.back() <<'\n';
				DQ.pop_back();
			}
		}
		else if (st == "size") {
			cout << DQ.size() << '\n';
		}
		else if (st == "empty") {
			cout << DQ.empty() << '\n';
		}
		else if (st == "front") {
			if (DQ.empty() == 1)cout << -1 << '\n';
			else cout << DQ.front() << '\n';
		}
		else {
			if (DQ.empty() == 1)cout << -1 << '\n';
			else cout << DQ.back() << '\n';
		}
		
	}
}