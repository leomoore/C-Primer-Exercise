#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	cout << "Please enter a string: " << endl;
	string str;
	getline(cin, str);
	cout << "You enterd: " << str << endl;
	for (auto &c : str)
		c = 'X';
	cout << "It has been transferred to :" << str;
	cin.get();
}