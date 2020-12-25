#include<iostream>
#include<list>
using namespace std;

int main() {
	string S;
	cin >> S;
	int M;
	cin >> M;
	list<char> L;
	for (auto c : S) L.push_back(c);
	auto cursor = L.end();
	for (int i = 0; i < M; i++) {
		char a;
		cin >> a;
		switch (a) {
		case 'L':
			if (cursor != L.begin()) cursor--;
			break;
		case 'D':
			if (cursor != L.end()) cursor++;
			break;
		case 'B':
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
			break;
		case 'P':
			char k;
			cin >> k;
			L.insert(cursor, k);
		}
	}
	for (auto c : L) cout << c;
}