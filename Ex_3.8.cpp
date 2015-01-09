#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	cout << "Please enter a string: " << endl;
	string str1,str2;
	getline(cin, str1);
	str2 = str1;
	cout << "You enterd: " << str1<< endl;

	// traditional for
	for (size_t i = 0; i != str1.size(); i++)
		str1[i] = 'X';

	//traditinal while
	size_t j = 0;
	while (j < str1.size())
	{
		str2[j] = 'X';
		++j;
	}

	cout << "It has been transferred by traditional for to:" << str1<<endl;
	cout << "It has been transferred by traditional while to:" << str2<<endl;
	cin.get();
}