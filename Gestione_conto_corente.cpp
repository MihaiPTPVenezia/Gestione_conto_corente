// Gestione_conto_corente.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <string>
#include "Intestazione.h"

using namespace std;

int main()
{
	bool chiudi = false;
	double saldo = 0;
	int opt;

	int conta = 0;
   
	transazioni muovimenti[100];
	
	transazioni trans;


	while (!chiudi) {
		menu();
		cout << "Opzione: ";
		cin >> opt;

		switch (opt)
		{
		case 0:
			chiudi = true;
			break;
		case 1:
			out_saldo(saldo);
			break;
		case 2:
			ins_transazione(trans, saldo);
			ins_movimento(trans, muovimenti, conta);
			break;
		case 3:
			print_trans(muovimenti, conta);

			break;
		}
		system("cls");
	}
	return 0;

}

