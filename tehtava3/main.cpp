#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    chef kokki("Pekka");
    kokki.makeSalad();
    kokki.makeSoup();

    italianchef kokki2("Seppo", 150, 250);
    kokki2.makeSalad();
    kokki2.makeSoup();

    cout << "Pasta kokin nimi on " << kokki2.getName() << endl;
    kokki2.makePaste();

    return 0;
}
