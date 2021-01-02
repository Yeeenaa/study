#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	int sum = 0;
	sort(d.begin(), d.end());
	for (int i = 0; sum < budget; i++) {
		sum += d[i];
		answer++;
	}
	if(sum>budget)	answer -= 1;
	cout << answer;
	return answer;

}
int main() {
	solution({2, 2, 3, 3 }, 10);
}