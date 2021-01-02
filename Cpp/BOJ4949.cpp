#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main() {
	deque<char> DQ;
	string st;
	while (1) {
		getline(cin, st);
		if (st == ".") break;
		for (auto c : st) {
			if (c == '(') DQ.push_front('(');
			else if (c == '[') DQ.push_front('[');
			else if (c == ')' && DQ.empty() == 1) { DQ.push_front(1); }
			else if (c == ']' && DQ.empty() == 1) { DQ.push_front(1); }
			else if (c == ')' && DQ.front() != '(') {
				DQ.push_front(1);
			}
			else if (c == ']' && DQ.front() != '[') {
				DQ.push_front(1);
			}
			else if (c == ')' && DQ.front() == '(') {
				DQ.pop_front();
			}
			else if (c == ']' && DQ.front() == '[') {
				DQ.pop_front();
			}
			
		}
		if (DQ.empty() == 1) cout << "yes\n";
		else cout << "no\n";
		DQ.clear();
	}
}