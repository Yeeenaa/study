#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int solution(string s) {
	int answer = 0;
	if (s.front() == '-') {
		for (int i = s.length()-1; i > 0; i--) {
			answer += pow(10, s.length()-i-1) * (s.at(i)-'0');
			cout << answer << '\n';
		}
		answer *= -1;
		cout << answer << '\n';
	}
	else if(s.front()=='+') {
		for (int i = s.length() - 1; i > 0; i--) {
			answer += pow(10, s.length() - i - 1) * (s.at(i) - '0');
			cout << answer << '\n';
		}
	}
	else {
		for (int i = s.length()-1; i >= 0; i--) {
			answer += pow(10, s.length()-i-1) * (s.at(i)-'0');
			cout << answer << '\n';
		}
	}

	return answer;
}
int main() {
	solution("+1234");
}