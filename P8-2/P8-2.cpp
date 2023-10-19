// P8-2
// Wesley Casselman
// October 19th, 2023

#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main()
{
	cout << countWords("Hey girl...");

	return 0;
}

int countWords(string str)
{
	int words = 0;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (i == 0)
		{
			if (str[0] != ' ')
			{
				words++;
			}
		}
		else if (i == (str.length() - 1))
		{

		}
		else
		{
			if (str[i] == ' ' && str[i + 1] != ' ')
			{
				words++;
			}
		}
	}

	return words;
}