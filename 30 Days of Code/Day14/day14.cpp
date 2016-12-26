#include <iostream>
#include <vector>


using namespace std;

class Difference {
    private:
        vector<int> elements;
  
    public:
        int maximumDifference;

        Difference(vector<int> e){
            this->elements = e;
        }

        void computeDifference(){
            int size = elements.size();
            int diff = 0;
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++){
                    if(i != j)
                        diff = elements[i] - elements[j];
                    if(diff > maximumDifference) maximumDifference = diff;
                }
            }
        }
};


int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }
    
    Difference d(a);
    d.computeDifference();
    cout << d.maximumDifference;
    
    return 0;
}