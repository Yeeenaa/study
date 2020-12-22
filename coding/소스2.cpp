#include<iostream>
using namespace std;

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int k = i+1; k < N; k++) {
			if (arr[i] + arr[k] == 100) return 1;
		}
	}
	return 0;
}

int main() {
	int arr1[] = {1, 52, 48};
	cout<<func2(arr1, 3);
	int arr2[] = { 50, 48 };
	cout << func2(arr2, 2);
	int arr3[] = { 4, 13, 63, 87 };
	cout << func2(arr3, 4);
}