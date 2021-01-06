#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer(n);
	vector<vector<int>> v1(n, vector<int>(n));
	vector<vector<int>> v2(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			v1[i][n-j-1] = arr1[i] % 2;
			arr1[i] /= 2;
			v2[i][n - j - 1] = arr2[i] % 2;
			arr2[i] /= 2;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v1[i][j] == 1 || v2[i][j] == 1) {
				answer.at(i) += '#';
			}
			else {
				answer.at(i) += ' ';
			}
		}
	}

	return answer;
}
int main() {
	vector<int> arr1 = { 9, 20, 28, 18, 11 };
	vector<int> arr2 = {30, 1, 21, 17, 28};
	solution(5, arr1, arr2);
}