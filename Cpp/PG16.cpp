#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long solution(long long n) {
	long long answer = 0;
	vector<int> v(10000);
	int i;
	for (i = 0; n > 0; i++) {
		v[i] = n % 10;
		n /= 10;
	}
	v.resize(i);
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < v.size(); i++) {
		answer += v[i]*pow(10, v.size()-i-1);
	}
	cout << answer;
	return answer;
}
int main() {
	solution(118372);
}