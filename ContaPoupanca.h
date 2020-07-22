#ifndef CONTA_POPCANCA_H
#define CONTA_POUPANCA_H

#include <vector>
#include "Saque.h"
#include "Deposito.h"
#include "Juros.h"
#include "Transacao.h"

using namespace std;

class ContaPoupanca:public Transacao 
{
protected:
    
    vector<Transacao*>transacao;


public:
    float getSaldo();
    void emitirExtrato();
    void depositar(float v);
    void sacar(float v);
};

#endif
