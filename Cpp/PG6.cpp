#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
	stack<char> st;
	bool answer = true;
	for (auto a : s) {
		if (a == 'P' || a == 'p') {
			if (st.empty()) st.push(a);
			else if (st.top() == 'y' || st.top() == 'Y')st.pop();
			else if (st.top() == 'P' || st.top() == 'p') st.push(a);
		}
		else if (a == 'Y' || a == 'y') {
			if (st.empty()) st.push(a);
			else if (st.top() == 'p' || st.top() == 'P') st.pop();
			else if (st.top() == 'y' || st.top() == 'Y') st.push(a);
		} 	}
	if (st.empty()) answer = true;
	else answer = false;
	cout << answer << endl;

	return answer;
}
int main() {
	solution("pPyyyy");
}