#include <string>
#include <vector>

#include<iostream>
using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> answer (n, 0);
	int cnt = 0;
	for (int i = x; cnt < n; i+=x) {
		answer[cnt] += i;
		cnt++;
	}

	return answer;
}
int main() {
	solution(2, 5);
}