#include <string>
#include <vector>
#include <iostream>
using namespace std;


bool solution(string s) {
	bool answer = true;
	if (s.length() == 4 || s.length() == 6) {
		for (char a : s) {
			if (!(a>='0'&&a<='9')) answer = false;
			else answer = true;
		}
	}
	else answer = false;
	cout << answer;
	return answer;
}

int main() {
	solution("1234");
}