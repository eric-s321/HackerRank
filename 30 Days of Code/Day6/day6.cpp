#include<iostream>
#include<string>


using namespace std;



void printEvens(string input, int length){
	for (int i = 0; i < length; i++){
		if(i % 2 == 0)
			cout << input[i];
	}

}

void printOdds(string input, int length){
	for(int i = 0; i < length; i++){
		if(i % 2 != 0)
			cout << input[i];
	}

}



int main() {
	string input;
	int numTestCases;
	cin >> numTestCases;
	for(int i = 0; i < numTestCases; i++){
		cin >> input;
		int length = input.size();
		printEvens(input,length);
		cout << " ";
		printOdds(input,length);
		cout << endl;
	}
	return 0;
}