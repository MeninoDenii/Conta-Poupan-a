#ifndef Juros_H_
#define Juros_H_

#include "Transacao.h"

class Juros : public Transacao 
{
public:
    Juros(int v);
    void emitirExtrato();
};	

#endif
