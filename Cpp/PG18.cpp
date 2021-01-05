#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
	long long answer = -1;
	int max = 7071068;
	for (int i = 1; i < max; i++) {
		if (n == pow(i, 2)) {
			answer = pow(i + 1, 2);
			break;
		}

	}
	return answer;
}