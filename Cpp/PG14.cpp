#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer (100);
	int i;
	for (i = 0; n > 0; i++) {
		answer[i] = n % 10;
		n /= 10;
	}
	answer.resize(i);
	return answer;
}
int main() {
	solution(12345);
}