#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int numNumbers;
    int negativeNums = 0;
    int positiveNums = 0;
    int zeroes = 0;
    cin >> numNumbers;
    
  for (int i = 0; i < numNumbers; i++){
        int currentNum;
        cin >> currentNum;
        if(currentNum > 0)
            positiveNums++;
        else if(currentNum < 0)
            negativeNums++;
        else if(currentNum == 0)
            zeroes++;
    }
    cout << setprecision(4) << fixed <<  (float)positiveNums / numNumbers << endl;
    cout <<  setprecision(4) << fixed << (float)negativeNums / numNumbers << endl;
    cout <<  setprecision(4) << fixed << (float)zeroes / numNumbers << endl;
   
}
