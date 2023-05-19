// Gestione_conto_corente.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <string>
#include "Intestazione.h"

using namespace std;

int main()
{
	double saldo = 0;
   
	transazioni entrate[100];
	transazioni uscite[100];
	
	transazioni trans;

	ins_transazione(trans);
	system("pause");
	system("cls");
	out_saldo(saldo);
	return 0;

}

