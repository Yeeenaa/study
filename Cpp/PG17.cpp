#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer(10000000);
	if (arr.size() == 1) {
		answer.at(0) = -1;
		answer.resize(1);
	}
	else {
		int min = 9999999;
		int i = 0;
		for (i = 0; i < arr.size(); i++) {
			if (arr.at(i) < min) {
				min = arr.at(i);
			}
		}
		for (i = 0; i < arr.size(); i++) {
			if (arr.at(i) == min) break;
		}
		for (int j = 0; j < i; j++) {
			answer.at(j) = arr.at(j);
		}
		for(int j=i+1;j<arr.size();j++){
			answer.at(j-1) = arr.at(j);
			
		}
		answer.resize(arr.size()-1);
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i];
	}
	return answer;
}

int main() {
	solution({ 4,3,2,1, 2, 4, 5 });
}