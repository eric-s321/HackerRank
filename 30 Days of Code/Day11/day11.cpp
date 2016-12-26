#include <iostream>
#include <vector>


using namespace std;


int largestHourGlass(vector< vector<int> > matrix){
	int largestSum = INT_MIN;
	int currentSum;
	int x;
	int y;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			currentSum = 0;
			x = i;
			y = j;
			currentSum += matrix[x][y];
			y++;
			currentSum += matrix[x][y];
			y++;
			currentSum += matrix[x][y];
			x++;
			y--;
			currentSum += matrix[x][y];
			x++;
			y--;
			currentSum += matrix[x][y];
			y++;
			currentSum += matrix[x][y];
			y++;
			currentSum += matrix[x][y];
			if(currentSum > largestSum)
				largestSum = currentSum;
		}
	}
	return largestSum;
}

int main(){

	int newElement;
	vector < vector<int> > matrix(6,vector<int>(6,0));
	for(int i = 0; i < 6; i++){
		for(int j = 0; j<6; j++){
			cin >> newElement;
			matrix[i][j] = newElement;
		}
	}
	int answer = largestHourGlass(matrix);
	cout << answer << endl;

	return 0;
}