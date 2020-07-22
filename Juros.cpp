#include "Juros.h"
#include <iostream>
#include "Transacao.h"
using namespace std;

Juros::Juros(int v)
 {
 	this->valor = v*0.1;
 }
 
void Juros::emitirExtrato()
{
    cout << "J: +" << this->valor << endl;
}
