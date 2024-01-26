#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class italianchef : public chef
{
public:
    italianchef(string, int, int);
    string getName();
    void makePaste();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
