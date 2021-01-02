#include<iostream>
#include<string>
using namespace std;

int func4(int N) {
	int ret=0;
	for (int i = 1; 2*i<=N ; i*=2) {
		//cout << 2*i<<'\n';
		ret = 2*i;
	}
	return ret;

}

int main() {
	cout << func4(5)<<'\n';
	cout << func4(97615282)<<'\n';
	cout << func4(1024);
}