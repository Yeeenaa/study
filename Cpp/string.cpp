#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0); //cin, cout �� ����ؾ��� scanf, printf ���Ұ�
	char c[10] = "hi";
	printf("%s", c);
	string s = c;
	cout << s;

	//������ ���Ե� ���� getline
	string st;
	getline(cin, st);
	cout << st;
}