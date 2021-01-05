#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum += arr.at(i);
	}
	answer = (double) sum / arr.size();
	return answer;
}
int main(){
	solution({ 1,2,3,4 });
}