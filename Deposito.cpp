#include "Deposito.h"
#include <iostream>

using namespace std;

Deposito::Deposito(int v)
 {
 	this-> valor = v;
 }

void Deposito::emitirExtrato()
{
    cout << "D: +" << this->valor << endl;
}
