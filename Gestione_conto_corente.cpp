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
   
	transazioni entrate[100];
	transazioni uscite[100];
	
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
			ins_transazione(trans);
			break;
		}
		system("cls");
	}
	return 0;

}

