#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> familyAndFriends;
	familyAndFriends.push_back("Vince");
	familyAndFriends.push_back("Sondra");
	familyAndFriends.push_back("Ava");
	familyAndFriends.push_back("Grayson");
	familyAndFriends.push_back("Nicole");

	familyAndFriends.insert(familyAndFriends.begin() + 2, "John Baugh");
	familyAndFriends.pop_back();

	for (string name : familyAndFriends)
	{
		cout << name << endl;
	}
}