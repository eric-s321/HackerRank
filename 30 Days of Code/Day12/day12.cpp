#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		// Write your constructor
  		Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id){
  			// this->firstName = firstName;
  			// this->lastName = lastName;
  			// this->id = id;
  			this->testScores = scores;
  		}
  
  		// Write char calculate()
	  	char calculate(){
	  		int scoreSum = 0;
	  		for(int i = 0; i < this->testScores.size(); i++){
	  			scoreSum += this->testScores[i];
	  		}
	  		int avg = scoreSum / this->testScores.size();
	  		if(avg < 40)
	  			return 'T';
	  		else if(avg < 55)
	  			return 'D';
	  		else if(avg < 70)
	  			return 'P';
	  		else if(avg < 80)
	  			return 'A';
	  		else if(avg < 90)
	  			return 'E';
	  		else
	  			return 'O';
	  	}


};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student s = Student(firstName, lastName, id, scores);
	s.printPerson();
	cout << "Grade: " << s.calculate() << "\n";
	return 0;
}