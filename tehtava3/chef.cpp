#include "chef.h"
#include <iostream>

using namespace std;

chef::chef(string chefName)
{
    name = chefName;
    cout << name <<" konstruktori" << endl;
}

chef::~chef()
{
    cout << name << " desktruktori" << endl;
}

void chef::makeSalad()
{
    cout << name << " makes salad." << endl;
}



void chef::makeSoup()
{
    cout << name << " makes soup." << endl;
}
