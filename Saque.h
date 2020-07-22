#ifndef SAQUE_H_
#define SAQUE_H_

#include"Transacao.h"

class Saque: public Transacao 
{
public:
    Saque(int v);
    void emitirExtrato();
};

#endif
