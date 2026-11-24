#include <iostream>
#include <string>

#include "parse_gesamtausdruck.h"

int main()
{
	std::size_t pos = 0;
	bool error_found = false;
	std::string input = "";

	std::cout << "Bitte geben Sie die Zeichenkette ein: ? ";
	std::getline(std::cin, input);

	parse_gesamtausdruck(input, pos, error_found);

	if (error_found)
		std::cout << "Error! Zeichenkette konnte nicht"
				  << " erfolgreich geparsed werden!";

	if ( pos != input.length() )
		std::cout << "Error! Noch Input-Zeichen uebrig.";

	return 0;
}
