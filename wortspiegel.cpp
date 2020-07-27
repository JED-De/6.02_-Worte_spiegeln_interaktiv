#include <iostream>
#include <string>

void wortspiegel(std::string &text, int pos)
{
	unsigned int wortanf = pos;
	unsigned int wortend = pos;
	char temp = ' ';
	while (wortanf != 0 && (text.at(wortanf - 1) >= 'a' && text.at(wortanf - 1) <= 'z' || text.at(wortanf - 1) >= 'A' && text.at(wortanf - 1) <= 'Z'))
	{
		wortanf--;
	}

	while (wortend + 1 < text.size() && (text.at(wortend + 1) >= 'a' && text.at(wortend + 1) <= 'z' || text.at(wortend + 1) >= 'A' && text.at(wortend + 1) <= 'Z'))
	{
		wortend++;
	}

	unsigned int wortlaenge = (wortend - wortanf) / 2;
	for (unsigned int j = 0; j <= wortlaenge; j++)
	{
		temp = text.at(wortanf + j);
		text.at(wortanf + j) = text.at(wortend - j);
		text.at(wortend - j) = temp;
	}
}