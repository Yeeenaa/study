#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
	string answer = "";
	for (char a : s) {
		
		if (a == ' ') {
			answer += ' ';
			
		}
		else if (a == '\t') {
			answer += '\t';
		}
		else {
			char k = 0;
			if (a >= 'a' && a <= 'z') {
				if (a + n > 'z') {
					k += a + n - 26;
				}
				else k += a + n;

			}
			else if (a >= 'A' && a <= 'Z') {
				if (a + n > 'Z') {
					k += a + n - 26;
				}
				else k += a + n;
			}
			answer += k;
		}
	}
	cout << answer;
	return answer;
}

int main() {
	solution("a b c", 25);
}