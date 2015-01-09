#include <iostream>
#include <string>
#include <cctype>

int main()
{
	using std::string;
	using std::cout;
	using std::cin;
	using std::endl;

	string s("Hello World!");

	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	
	cout <<s << endl;
	cin.get();

	


}