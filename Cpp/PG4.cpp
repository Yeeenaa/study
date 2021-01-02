#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size()));
	answer.resize(arr1.size());
	for (int i = 0; i < arr1.size(); i++) {
		for (int j = 0; j < arr1[0].size(); j++) {
			answer[i][j] = arr1[i][j] + arr2[i][j];
			cout << answer[i][j] << '\n';
		}
	}
	
	return answer;
}
int main() {
	solution({ { 1,2 }, {2, 3} }, { {3, 4},{5,6} });
}