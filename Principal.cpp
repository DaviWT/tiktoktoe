#include "Principal.hpp"

Principal::Principal()
{
    run();
}

string Principal::getName()
{
    return nome;
}

void Principal::setName(string name)
{
    nome = name;
}

void Principal::run()
{
    setName("TIKTOKTOE");
    cout << getName() << endl;
    cin.get();
}