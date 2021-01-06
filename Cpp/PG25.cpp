#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
	bool answer = true;
	int sum = 0;
	int X = x;
	for (int i = 0; X > 0; i++) {
		sum += X % 10;
		X /= 10;
	}
	if (x % sum == 0) {
		answer = true;
	}
	else answer = false;
	return answer;
}
int main() {
	solution(11);
}