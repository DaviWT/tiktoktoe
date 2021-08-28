#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED

#include <iostream>
using namespace std;

class Principal
{
    private:
    string nome;

    public:
    void run();
    string getName();
    void setName(string name);
    Principal();
};

#endif // PRINCIPAL_H_INCLUDED