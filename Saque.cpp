#include "Saque.h"
#include <iostream>
#include "Transacao.h"

using namespace std;

 Saque::Saque(int v)
 {
 	valor = -v;
 }

void Saque::emitirExtrato()
{
    cout << "S: -" << this->valor << endl;
}
