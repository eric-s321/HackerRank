#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	int entries;
	cin >> entries;
	map<string,string> phoneBook;
	for(int i = 0; i < entries; i++){
		string name;
		string number;
		cin >> name;
		cin >> number;
		phoneBook[name] = number;
	}

	string nameToCheck;

	cin.ignore();
	while(getline(cin, nameToCheck)){
		if(nameToCheck.empty())
			break;
		map<string,string>::iterator it;
		it = phoneBook.find(nameToCheck);
		if(it != phoneBook.end())
			cout << it->first << "=" << it->second << endl;
		else
			cout << "Not found" << endl;
	}

}