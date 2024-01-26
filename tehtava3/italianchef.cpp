#include "italianchef.h"
#include <iostream>

using namespace std;

italianchef::italianchef(string chefName, int a, int b): chef(chefName)
{
    vesi = a;
    jauhot = b;
}

string italianchef::getName()
{
    return name;
}

void italianchef::makePaste()
{
    cout << name << " makes paste with special recipe" << endl;
    cout << name << " uses jauhot " << jauhot << endl;
    cout << name << " uses vesi " << vesi << endl;
}
