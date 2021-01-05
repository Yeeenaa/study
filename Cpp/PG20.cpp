#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer(2);
	if (n > m) {		// m>n
		int tmp = n;
		n = m;
		m = tmp;
	}
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && m % i == 0) {
			answer.at(0) = i;
		}
	}
	for (int i = (m * n); i >= m; i--) {
		if (i % n == 0 && i % m == 0) {
			answer.at(1) = i;
		}
	}
	return answer;
}
int main() {
	solution(3, 12);
}