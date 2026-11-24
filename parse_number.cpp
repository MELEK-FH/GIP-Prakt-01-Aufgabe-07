// TODO: Ihr Code hier //
#include "parse_number.h"
#include "expect.h"
#include "match.h"

#include <iostream>
#include <string>

using namespace std;

void parse_number(string input, size_t &pos,
                  bool &error_found)
{
    cout << "Betrete parse_number()" << endl;

    if (expect('0', input, pos))
    {
        match('0', input, pos, error_found);
    }
    else if (expect('1', input, pos))
    {
        match('1', input, pos, error_found);
    }
    else if (expect('2', input, pos))
    {
        match('2', input, pos, error_found);
    }
    else if (expect('3', input, pos))
    {
        match('3', input, pos, error_found);
    }
    else if (expect('4', input, pos))
    {
        match('4', input, pos, error_found);
    }
    else if (expect('5', input, pos))
    {
        match('5', input, pos, error_found);
    }
    else if (expect('6', input, pos))
    {
        match('6', input, pos, error_found);
    }
    else if (expect('7', input, pos))
    {
        match('7', input, pos, error_found);
    }
    else if (expect('8', input, pos))
    {
        match('8', input, pos, error_found);
    }
    else if (expect('9', input, pos))
    {
        match('9', input, pos, error_found);
    }
    else
    {
        error_found = true;
    }

    cout << "Verlasse parse_number()" << endl;
}