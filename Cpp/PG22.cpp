#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
	int answer = 0;
	int i;
	long long N = num;
	for (i = 0; N != 1 && i < 500; i++) {
		if (N % 2 == 0) {
			N /= 2;
			answer++;
		}
		else {
			N *= 3;
			N++;
			answer++;
		}
	}
	if (i == 500) answer = -1;
	cout << answer;
	return answer;
}
int main() {
	solution(626331);
}