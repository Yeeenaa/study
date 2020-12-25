#include<iostream>
using namespace std;

int main() {
	string S;
	cin >> S;
	int freq[26] = { };
	for (auto c : S) {
		freq[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << freq[i]<<' ';
	}
}

/*int main() {
	string S;
	cin >> S;
	for (char a = 'a'; a <= 'z'; a++) {
		int cnt = 0;
		for (auto c : S) {
			if (a == c) cnt++;
		}
		cout << cnt << ' ';
	}
}*/
