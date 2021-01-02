#include<iostream>
#include<stack>
using namespace std;

int main() {
	int N;
	cin >> N;
	stack<int> stack;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int X;
			cin >> X;
			stack.push(X);
		}
		else if (s == "pop") {
			if (stack.empty() == 1) cout << -1<<'\n';
			else {
				cout << stack.top()<<'\n';
				stack.pop();
			}
		}
		else if (s == "size") {
			cout << stack.size()<<'\n';
		}
		else if (s == "empty") {
			if (stack.empty() == 1) cout << 1 <<'\n';
			else cout << 0<<'\n';
		}
		else {
			if (stack.empty() == 1) cout << -1<<'\n';
			else cout << stack.top()<<'\n';

		}
	}

}