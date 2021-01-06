#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size(),0));
	for (int i = 0; i < arr1.size(); i++) {
		for (int j = 0; j < arr1[0].size(); j++) {
			answer.at(i).at(j) = arr1[i][j] + arr2[i][j];
		}
	}
	cout << answer.size() << answer[0].size();
	return answer;
}

int main() {
	solution({ {1,2}, {2,3} }, { {3,4}, {5,6} });
}