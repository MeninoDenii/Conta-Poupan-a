#include <iostream>
#include "ContaPoupanca.h"
#include "Transacao.h"

using namespace std;

int main()
{
    ContaPoupanca cp;

    while(true)
    {
        cout << "1. Emitir extrato" << endl;
        cout << "2. Emitir saldo" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Depositar" << endl;
        cout << "5. sair" << endl;
        int op;
        cin >> op;

        switch(op)
        {
            float valor;
            case 1:
                cp.emitirExtrato();
                break;
            case 2:
                cout << "Saldo Final: " << cp.getSaldo() << endl;
                break;
            case 3:
                cout << "Digite o valor a ser sacado:";
                cin >> valor;
                cp.sacar(valor);
                break;
            case 4:
                cout << "Digite o valor a ser depositado:";
                cin >> valor;
                cp.depositar(valor);
                break;
            case 5:
                return 1;
        }

    }

    return 0;
}
