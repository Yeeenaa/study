#include<iostream>
#include<deque>
using namespace std;

int main(void) {
	deque<int> DQ;
	DQ.push_front(10);
	DQ.push_back(50);
	DQ.push_front(24);
	for (auto x : DQ) cout << x;
	cout << DQ.size() << '\n';
	if (DQ.empty()) cout << "DQ is empty\n";
	else cout << "DQ is not empty\n";
	DQ.pop_front();
	DQ.pop_back();
}