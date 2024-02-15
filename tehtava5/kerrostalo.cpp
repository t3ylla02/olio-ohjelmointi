#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    peka = new Katutaso;
    ptoka = new Kerros;
    pkolmas = new Kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    peka->maaritaAsunnot();
    ptoka->maaritaAsunnot();
    pkolmas->maaritaAsunnot();


}

Kerrostalo::~Kerrostalo()
{
    delete peka;
    delete ptoka;
    delete pkolmas;
    cout<<"Kerrostalo tuhottu"<<endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = peka->laskeKulutus(hinta);
    double kerrostenKulutus = ptoka->laskeKulutus(hinta) + pkolmas->laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;
}
