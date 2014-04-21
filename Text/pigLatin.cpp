/*Pig Latin - Pig Latin is a game of alterations played on the English language game. 
To create the Pig Latin form of an English word the initial consonant sound is transposed 
to the end of the word and an ay is affixed 
(Ex.: "banana" would yield anana-bay). Read Wikipedia for more information on rules.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string originalWord;
	string pigWord;

	cout << "Enter word" << endl;
	cin >> originalWord;

	pigWord = originalWord.substr(1, (originalWord.length())) + "-" + originalWord.at(0) + "ay";

	cout << pigWord << endl;

	return 0;
}