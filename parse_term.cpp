// TODO: Ihr Code hier //
#include "parse_term.h"
#include "parse_operand.h"
#include "expect.h"
#include "match.h"

#include <iostream>
#include <string>

using namespace std;

void parse_term(string input, size_t &pos,
                bool &error_found)
{
    cout << "Betrete parse_term()" << endl;

    parse_operand(input, pos, error_found);

    while (!error_found &&
           (expect('>', input, pos) ||
            expect('<', input, pos)))
    {
        if (expect('>', input, pos))
        {
            cout << "Betrete parse_term(): '>' Fall" << endl;

            match('>', input, pos, error_found);
            parse_operand(input, pos, error_found);

            cout << "Verlasse parse_term(): '>' Fall" << endl;
        }
        else if (expect('<', input, pos))
        {
            cout << "Betrete parse_term(): '<' Fall" << endl;

            match('<', input, pos, error_found);
            parse_operand(input, pos, error_found);

            cout << "Verlasse parse_term(): '<' Fall" << endl;
        }
    }

    cout << "Verlasse parse_term()" << endl;
}