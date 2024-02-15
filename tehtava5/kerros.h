#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;


class Kerros
{
public:
    Kerros();
    virtual ~Kerros();
    virtual void maaritaAsunnot(void);
    virtual double laskeKulutus(double);
    /*asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;*/

    asunto * pas1;
    asunto * pas2;
    asunto * pas3;
    asunto * pas4;
};

#endif // KERROS_H
