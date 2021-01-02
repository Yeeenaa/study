#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(int n) {
	vector<int> v1(17);
	int cnt = 0;
	for (int i = 0; n > 0 ; i++) {
		v1[i] = n % 3;
		n = n / 3;
		cnt++;
	}
	v1.resize(cnt);
	//v1[cnt - 1] = n;
	int answer = 0;
	for (int i = 0; i < cnt; i++) {
		answer += v1[i] * pow(3, cnt - 1 - i);
	}
	cout << answer;
	return answer;
}
int main() {
	solution(45);
}