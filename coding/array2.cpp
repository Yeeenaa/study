#include<iostream>
using namespace std;

int func2(int arr[], int N) {
	int arr2[101] = {  };
	for (int i = 0; i < N; i++) {
		if (arr2[100 - arr[i]] == 1) return 1;
		arr2[arr[i]] = 1;
	}
	return 0;
}

int main() {
	int N;
	cin >> N;
	int arr[1000] = { };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cout<<func2(arr, N);
}