#include "kerros.h"

Kerros::Kerros()
{
    pas1 = new asunto;
    pas2 = new asunto;
    pas3 = new asunto;
    pas4 = new asunto;
    cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros()
{
    delete pas1;
    delete pas2;
    delete pas3;
    delete pas4;
    cout<<"Kerros tuhottu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    pas1->maarita(3,100);
    pas2->maarita(4,100);
    pas3->maarita(5,100);
    pas4->maarita(6,100);

}

double Kerros::laskeKulutus(double hinta)
{
    cout<<"Alkuperainen Kerroksen laskeKulutus"<<endl;
    return pas1->laskeKulutus(hinta)+pas2->laskeKulutus(hinta)
         + pas3->laskeKulutus(hinta)+pas4->laskeKulutus(hinta);

}
