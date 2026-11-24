// TODO: Ihr Code hier //
#include "parse_operand.h"
#include "parse_number.h"
#include "parse_ausdruck.h"
#include "expect.h"
#include "match.h"

#include <iostream>
#include <string>

using namespace std;

void parse_operand(string input, size_t &pos,
                   bool &error_found)
{
    cout << "Betrete parse_operand()" << endl;

    if (expect('(', input, pos))
    {
        cout << "Betrete parse_operand(): '(' Fall" << endl;

        match('(', input, pos, error_found);

        parse_ausdruck(input, pos, error_found);

        if (!error_found)
        {
            match(')', input, pos, error_found);
        }

        cout << "Verlasse parse_operand(): '(' Fall" << endl;
    }
    else
    {
        parse_number(input, pos, error_found);
    }

    cout << "Verlasse parse_operand()" << endl;
}