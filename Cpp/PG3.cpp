#include <string>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer(strings.size());
	for (int i = 0; i < (strings.size() - 1); i++) {
		for (int j = i + 1; j < strings.size(); j++) {
			if (strings[i][n] > strings[j][n]) {
				string s = strings[i];
				strings[i] = strings[j];
				strings[j] = s;
			}
			else if (strings[i][n] == strings[j][n]) {
				for (int k = 0; strings[j].size() > k || strings[i].size() > k; k++) {
					if (strings[i][n + k] != strings[j][n + k]) {
						if (strings[i][n] > strings[j][n]) {
							string s = strings[i];
							strings[i] = strings[j];
							strings[j] = s;
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < strings.size(); i++) {
		answer[i] = strings[i];
		cout << answer[i];
	}
	
	return answer;
}
int main() {
	solution({ "abcd", "abce", "cdx" }, 2);
}