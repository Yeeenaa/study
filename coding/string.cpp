#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0); //cin, cout 시 사용해야함 scanf, printf 사용불가
	char c[10] = "hi";
	printf("%s", c);
	string s = c;
	cout << s;

	//공백이 포함될 때는 getline
	string st;
	getline(cin, st);
	cout << st;
}