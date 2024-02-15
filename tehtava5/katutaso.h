#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
using namespace std;

#include "kerros.h"



class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    /*asunto as1;
    asunto as2;*/
    asunto * pas1;
    asunto * pas2;
    virtual void maaritaAsunnot(void) override;
    virtual double laskeKulutus(double) override;

};

#endif // KATUTASO_H
