#include <iostream>
using namespace std;

#include "kerrostalo.h"

int main()
{
    /*
    asunto olio;
    olio.maarita(2,100);
    cout<<"asunnon kulutus, kun hinta=1 on "<<olio.laskeKulutus(1)<<endl;


    Kerros olio;
    olio.maaritaAsunnot();
    */

    /*
    Katutaso olio;
    olio.maaritaAsunnot();
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<<olio.laskeKulutus(1)<<endl;
    */

    Kerrostalo  * talo = new Kerrostalo;
    cout<<"Kerrostalon kulutus, = "<<talo->laskeKulutus(1)<<endl;

    delete talo;

    return 0;
}
