#include<iostream>
using namespace std;

const int MX = 100005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos] = x;
	pos++;
}

void pop() {
	//dat[pos] = 0;
	pos--;
}

int top() {
	return dat[pos-1];
}

void test() {


}

int main() {
	test();
}