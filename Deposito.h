#ifndef Deposito_H_
#define Deposito_H_
#include "Transacao.h"

class Deposito : public Transacao {
public:
    Deposito(int v);
    void emitirExtrato();
};

#endif
