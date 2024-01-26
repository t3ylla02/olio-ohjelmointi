#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class chef
{
public:
    chef(string);
    ~chef();
    void makeSalad();
    void makeSoup();

protected:
    string name;

};

#endif // CHEF_H
