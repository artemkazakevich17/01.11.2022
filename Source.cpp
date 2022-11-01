#include <iostream>
using namespace std;
int main() {
	/*const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}*/
	//задача 1
	/*const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << arr[i] << ' ';
	}*/
	//задача 2
	const int size = 8;
	int s;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int s = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			s += arr[i];
		 }
	}
	cout << s << endl;


	
	
	

}