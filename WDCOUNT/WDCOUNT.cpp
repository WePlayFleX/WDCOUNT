#include <iostream>
#include <conio.h>

#pragma warning(disable : 4996)

using namespace std;

enum itsaWord {NO, YES};

int main()
{
	itsaWord isWord = NO;
	char ch = 'a';
	int wordCount = 0;
	cout << "Enter a sentence: \n";
	do
	{
		ch = getche();
		if (ch == ' ' || ch == '\r')
		{
			if (isWord == YES)
			{
				wordCount++;
				isWord = NO;
			}
		}
		else if (isWord == NO)
		{
			isWord = YES;
		}
	} while (ch != '\r');

	cout << "\n ---Number of words: " << wordCount << "---\n";

	system("pause");
	return 0;
}