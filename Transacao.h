#ifndef Transacao_H_
#define Transacao_H_


class Transacao {
	public:
		void transacao(int v);
		virtual float getValor();
		virtual void emitirExtrato();
		
	protected:
		float saldo;
		float valor;
	
};

#endif
