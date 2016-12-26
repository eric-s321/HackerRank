#include <iostream>


using namespace std;

int main() {

	int arraySize;
	cin >> arraySize;
	int arr [arraySize];
	for(int i = 0; i < arraySize; i++){
		cin >> arr[i]; 
	}
	for(int i = arraySize - 1; i >= 0; i--){
		cout << arr[i] << " ";
	}
}