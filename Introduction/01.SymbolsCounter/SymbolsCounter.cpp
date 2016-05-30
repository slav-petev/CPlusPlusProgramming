#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

string readUserInputFromConsole();
unsigned int calculateUppercaseLettersCount(string userInput);
unsigned int calculateLowercaseLettersCount(string userInput);
unsigned int calculateOtherSymbolsCount(string userInput);
void printInfoOnTheConsole(string info);

int main()
{
	string userInput = readUserInputFromConsole();

	unsigned int upperCaseLettersCount = calculateUppercaseLettersCount(userInput);
	unsigned int lowerCaseLettersCount = calculateLowercaseLettersCount(userInput);
	unsigned int otherSymbolsCount = calculateOtherSymbolsCount(userInput);

	// This is similar to C# StringBuilder class
	//http://www.cplusplus.com/reference/sstream/stringstream/ - strinstream reference
	//http://www.dreamincode.net/forums/topic/95826-stringstream-tutorial/ - stringstream tutorial
	stringstream infoBuilder; 
	
	infoBuilder << "Uppercase Letters: " << upperCaseLettersCount;
	printInfoOnTheConsole(infoBuilder.str());
	infoBuilder = stringstream();
	
	infoBuilder << "Lowercase Letters: " << lowerCaseLettersCount;
	printInfoOnTheConsole(infoBuilder.str());
	infoBuilder = stringstream();
	
	string otherSymbolsInfo = "Other Symbols: " + otherSymbolsCount;
	infoBuilder << "Other Symbols: " << otherSymbolsCount;
	printInfoOnTheConsole(infoBuilder.str());
	infoBuilder = stringstream();

	getline(cin, userInput); //
}

string readUserInputFromConsole()
{
	string userInput;
	getline(cin, userInput);

	return userInput;
}

unsigned int calculateUppercaseLettersCount(string userInput)
{
	unsigned int uppercaseLettersCount = 0;

	for (unsigned int i = 0; i < userInput.size(); i++)
	{
		if (isupper(userInput[i]))
		{
			uppercaseLettersCount++;
		}
	}

	return uppercaseLettersCount;
}

unsigned int calculateLowercaseLettersCount(string userInput)
{
	unsigned int lowercaseLettersCount = 0;

	for (unsigned int i = 0; i < userInput.size(); i++)
	{
		if (islower(userInput[i]))
		{
			lowercaseLettersCount++;
		}
	}

	return lowercaseLettersCount;
}

unsigned int calculateOtherSymbolsCount(string userInput)
{
	unsigned int symbolsCount = 0;

	for (unsigned int i = 0; i < userInput.size(); i++)
	{
		if (!isalpha(userInput[i]))
		{
			symbolsCount++;
		}
	}

	return symbolsCount;
}

void printInfoOnTheConsole(string info)
{
	cout << info << endl;
}