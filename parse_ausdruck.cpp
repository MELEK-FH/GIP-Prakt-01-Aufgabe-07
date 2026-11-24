// TODO: Ihr Code hier //
#include "parse_ausdruck.h"
#include "parse_term.h"
#include "expect.h"
#include "match.h"

#include <iostream>
#include <string>

using namespace std;

void parse_ausdruck(string input, size_t &pos,
                    bool &error_found)
{
    cout << "Betrete parse_ausdruck()" << endl;

    parse_term(input, pos, error_found);

    while (!error_found &&
           (expect('U', input, pos) ||
            expect('O', input, pos)))
    {
        if (expect('U', input, pos))
        {
            cout << "Betrete parse_ausdruck(): 'U' Fall" << endl;

            match('U', input, pos, error_found);
            parse_term(input, pos, error_found);

            cout << "Verlasse parse_ausdruck(): 'U' Fall" << endl;
        }
        else if (expect('O', input, pos))
        {
            cout << "Betrete parse_ausdruck(): 'O' Fall" << endl;

            match('O', input, pos, error_found);
            parse_term(input, pos, error_found);

            cout << "Verlasse parse_ausdruck(): 'O' Fall" << endl;
        }
    }

    cout << "Verlasse parse_ausdruck()" << endl;
}