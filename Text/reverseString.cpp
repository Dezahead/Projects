#include <iostream>
#include <string>

using namespace std;

int main()
{
	string originalWord;
	string reversedWord = " ";
	int length;

	cout << "Enter a word" << endl;
	cin >> originalWord;

	length = originalWord.length();

	for (int i = (length - 1); i >= 0 ; --i)
	{
		reversedWord += originalWord.at(i);
	}

	reversedWord = reversedWord.substr(1, length);

	cout << reversedWord << endl;

	return 0;
}