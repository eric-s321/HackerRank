#include<iostream>
#include<string>

using namespace std;

string binaryRepresentation(int n){
	string b;
	while(n != 0){
		if(n % 2 == 0)
			b = "0" + b;
		else
			b = "1" + b;
		n /= 2;
	}
	return b;
}

int mostOnesInARow(string binaryNum){
	int oneCount = 0;
	int maxOneCount = 0;
	for(int i = 0; i< binaryNum.length(); i++){
		if(binaryNum[i] == '1'){
			oneCount++;
			if(oneCount > maxOneCount)
				maxOneCount = oneCount;
		}
		else
			oneCount = 0;
	}
	return maxOneCount;
}


int main(){

	int num;
	cin >> num;
	string binaryNum = binaryRepresentation(num);
	int longestOnes = mostOnesInARow(binaryNum);
	cout << longestOnes << endl;
	return 0;
}