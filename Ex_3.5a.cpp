#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string str1, temp;
	while (cin >> temp)
	{
		str1 += temp;
		str1 += '\40';
	}
	cout << str1 << endl;
	cin.get();

	


}