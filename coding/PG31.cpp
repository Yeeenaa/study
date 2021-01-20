#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;


string solution(vector<int> numbers, string hand) {
	string answer = "";
	int r = 12;
	int l = 10;
	for (int i = 0; i < numbers.size(); i++) {
		int num = numbers[i];
		int rdis, ldis;
		int rcnt=0, lcnt=0;
		if (numbers[i] == 0) num = 11;

		if (num == 1 || num == 4 || num == 7) {
			answer += 'L';
			l = num;
		}
		else if (num == 3 || num == 6 || num == 9) {
			answer += 'R';
			r = num;
		}
		else {
			rdis = abs(r - num); //7-11 = 4
			ldis = abs(l - num); //12-11 = 1
			for (int k = 0; rdis >= 3; k++) { //k=1 rdis=1
				rdis -= 3;
				rcnt++;
			}
			rdis += rcnt;	//rdis = 1+1 = 2
			for (int k = 0; ldis >= 3; k++) {
				ldis -= 3;
				lcnt++;
			}
			ldis += lcnt;	//ldis=1
			if (rdis == ldis) {
				if (hand == "right") {
					answer += 'R';
					r = num;
				}
				else {
					answer += 'L';
					l = num;
				}
			}
			else if (rdis > ldis) {
				answer += 'L';
				l = num;
			}
			else {
				answer += 'R';
				r = num;
			}
		}
	}
	cout << answer;

	return answer;
}
