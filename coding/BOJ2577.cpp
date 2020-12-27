#include<iostream>
#include<string>
using namespace std;

int main() {
	int a, b, c, u;
	cin >> a >> b >> c;
	u = a * b * c;
	string S = to_string(u);
	for (char i = '0'; i <= '9'; i++) {
		int cnt = 0;
		for (auto c : S) {
			if (i == c) cnt++;
		}
		cout << cnt << "\n";
	}
}