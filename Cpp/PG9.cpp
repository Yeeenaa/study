#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
	string answer = "";
	sort(s.begin(), s.end());
	for (int a = s.length(); a > 0; a--) {
		answer+=(s.at(a-1));

	}
	cout << answer;
	return answer;
}
int main() {
	solution("Zbcdefg");
}