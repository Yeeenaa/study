#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
	vector<vector<double>> ans(N, vector <double>(2, 0));
	vector<int> answer(N);
	vector<int> fail(N);
	int user = stages.size();
	int tmp1;
	double tmp2;
	for (int i = 0; i < stages.size(); i++) {
		for (int k = 0; k < stages.at(i)-1; k++) {
			fail.at(k) += 1;
		}
	}
	ans.at(0).push_back(0);
	int f = fail.at(0);
	double an = (double)(user - f) / N;
	ans.at(0).at(0)=0;
	ans.at(0).at(1)=an;
	for (int i = 1; i < N; i++) {
		int f1 = fail.at(i - 1);
		int f2 = fail.at(i);
		ans.at(i).at(1) = (double)(f1-f2) / f1;
		ans.at(i).at(0) = i;
	}
	for (int i = 0; i < N-1; i++) {
		for (int k = i; k < N; k++) {
			if (ans.at(i).at(1) < ans.at(k).at(1)) {
				tmp1 = ans.at(i).at(0);
				tmp2 = ans.at(i).at(1);
				ans.at(i).at(0) = ans.at(k).at(0);
				ans.at(i).at(1) = ans.at(k).at(1);
				ans.at(k).at(0) = tmp1;
				ans.at(k).at(1) = tmp2;
			}
			else if (ans.at(i).at(1) == ans.at(k).at(1)) {
				if (ans.at(i).at(0) > ans.at(k).at(0)) {
					tmp1 = ans.at(i).at(0);
					ans.at(i).at(0) = ans.at(k).at(0);
					ans.at(k).at(0) = tmp1;
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		answer.at(i) = ans.at(i).at(0)+1;
		cout << answer.at(i);
	}


	return answer;
}

int main() {
	solution(5, { 2,1,2,3,2,3,3,3 });
}