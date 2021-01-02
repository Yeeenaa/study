#include <string>
#include <vector>
#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	stack<string> pa;
	stack<string> co;
	string answer = "";
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	for (int i = 0; i < participant.size(); i++) {
		pa.push(participant[i]);
	}
	for (int i = 0; i < completion.size(); i++) {
		co.push(completion[i]);
	}
	for (int i = 0; i < completion.size(); i++) {
		if (pa.top() == co.top()) {
			pa.pop();
			co.pop();
		}
		else { 
			 
			break;
		}
	}
	answer = pa.top();
	cout << answer;
	return answer;
}

int main() {
	solution({ "leo", "kiki", "eden" }, { "eden", "kiki" });
}