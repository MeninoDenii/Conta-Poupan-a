#include "ContaPoupanca.h"
#include <iostream>

#include"Transacao.h"

using namespace std;

 float ContaPoupanca::getSaldo()
 {
     this->saldo = 0;

     for(int i = 0; i < this->transacao.size(); ++i)
     {
         Transacao* d = this->transacao[i];
         this->saldo += transacao[i]->getValor();
     }
     return this->saldo;
 }

void ContaPoupanca::emitirExtrato()
{
 for(int i = 0; i < this->transacao.size(); ++i)
     {
         Transacao* d = this->transacao[i];
         d->emitirExtrato();
     }

     

     cout << "Saldo Final: " << this->getSaldo() << endl;
}

void ContaPoupanca::depositar(float v)
{
    Transacao* d = new Deposito(v);
    this->transacao.push_back(d);

    d = new Juros(v);
    this->transacao.push_back(d);
}

void ContaPoupanca::sacar(float v)
{
    Transacao* s = new Saque(v);
    this->transacao.push_back(s);
}
