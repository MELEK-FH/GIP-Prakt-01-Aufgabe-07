// TODO: Ihr Code hier //
#include "parse_gesamtausdruck.h"
#include "parse_ausdruck.h"
#include "match.h"

#include <iostream>
#include <string>

using namespace std;

void parse_gesamtausdruck(string input, size_t &pos,
                         bool &error_found)
{
    cout << "Betrete parse_gesamtausdruck()" << endl;

    parse_ausdruck(input, pos, error_found);

    if (!error_found)
    {
        match('.', input, pos, error_found);
    }

    cout << "Verlasse parse_gesamtausdruck()" << endl;
}