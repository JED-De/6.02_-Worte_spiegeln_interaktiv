#include <iostream>
#include <string>
#include "wortspiegel.h"
using namespace std;

int main()
{
	string text = "";
	int pos = 0;
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);
		char auswahl;
		do
		{
			std::cout << text << std::endl;
			for (int i = 0; i < pos; i++)
			{
				std::cout << " ";
			}
			std::cout << "*" << std::endl;
			std::cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
			std::cin >> auswahl;
			if ((auswahl == 'l' || auswahl == 'L') && pos > 0)
			{
				pos--;
			}
			else if ((auswahl == 'r' || auswahl == 'R') && pos + 1 < text.size())
			{
				pos++;
			}
			else if ((auswahl == 's' || auswahl == 'S') && (text.at(pos) >= 'a' && text.at(pos) <= 'z' || text.at(pos) >= 'A' && text.at(pos) <= 'Z'))
			{
				wortspiegel(text, pos);
			}
			std::cout << std::endl;
		} while (auswahl != 'q' && auswahl != 'Q');
	

	system("PAUSE");
	return 0;
}