#include <string>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int solution(string dartResult) {
	int answer = 0;
	vector<int> ans = { 0,0,0 };
	int c = 0;
	for (int i = 0; i < dartResult.size(); i++) {
		if (dartResult.at(i) == '*') {
			if (c == 1) {
				ans.at(c - 1) *= 2;
			}
			else {
				ans.at(c - 2) *= 2;
				ans.at(c - 1) *= 2;
			}
		}
		else if (dartResult.at(i) == '#') {
			ans.at(c - 1) *= -1;
		}
		else if (dartResult.at(i) == 'S') {
			c++;
		}
		else if (dartResult.at(i) == 'D') {
			ans.at(c) = pow(ans.at(c), 2);
			c++;
		}
		else if (dartResult.at(i) == 'T') {
			ans.at(c) = pow(ans.at(c), 3);
			c++;
		}
		else {
			if (dartResult.at(i) == '1' && dartResult.at(i + 1) == '0') {
				ans.at(c) = 10;
				i++;
			}
			else {
				ans.at(c) = dartResult.at(i) - 48;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		answer += ans.at(i);
	}
	return answer;
}
int main() {
	solution("1S2D*3T");
}