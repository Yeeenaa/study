#include<iostream>
using namespace std;
int func1(int N) {
	int sum1=0, sum2=0, sum3=0;		
	int k = 1;
	for (int i = 1; i <= (N / 3); i++) {
		k = i * 3;
		if (k % 3 == 0) sum1 += k;
		//cout <<"sum1=" << sum1<<'\n';
	}
	for (int i = 1; i <= N / 5; i++) {
		k = i * 5;
		if (k % 5 == 0) sum2 +=k;
		//cout << "sum2=" << sum2<<'\n';
	}
	for (int i = 1; i <= N / 15; i++) {
		k = i * 15;
		if (k % 15 == 0) sum3 += k;
		//cout <<"sum3=" << sum3;
	}

	return sum1+sum2-sum3;
}
int main() {
	cout<<func1(16)<<'\n';
	cout << func1(34567)<<'\n';
	cout << func1(27639)<<'\n';
}

/*
#include<iostream>
using namespace std;
int func1(int N) {
	int ret = 0;
	for (int i = 0; i < N; i++) {
		if (i % 3 == 0 || i % 5 == 0) ret += i;
	}
	return ret;
}

int main() {
	cout << func1(16);
	cout << func1(34567);
	cout << func1(27369);
}
*/