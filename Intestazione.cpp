#include <iostream>
#include <string>
#include "Intestazione.h"

using namespace std;

void menu() {
	cout << "1) Vizualizza saldo\t\t2) Transazione\n";
	cout << "0) EXIT\n";
	return;
}

//Input  data
void ins_date(date& d) {
	bool ripeti = false;
	do
	{
		ripeti = false;
		cout << "\tGiorno: ";
		cin >> d.giorno;
		if (d.giorno <= 0 || d.giorno > 31) {
			cout << "DATA INESISTENTE!!!\n";
			ripeti = true;
		}
	} while (ripeti);
	
	do
	{
		ripeti = false;
		cout << "\tMese: ";
		cin >> d.mese;
		if (d.mese <= 0 || d.mese > 12) {
			cout << "MESE INESISTENTE!!!\n";
			ripeti = true;
		}
	} while (ripeti);
	do
	{
		ripeti = false;
		cout << "\tAnno: ";
		cin >> d.anno;
		if (d.anno <= 2000 || d.anno > 2100) {
			cout << "IMPOSIBILE!!!\n";
			ripeti = true;
		}
	} while (ripeti);

	return;
}

// Input descrizione
void ins_descrizione(string& desc) {
	cout << "Descrizione del programma:\n";
	getline(cin, desc);
	return;
}

// Imput importo
void ins_importo(double& imp) {
	bool ripeti = false;
	do
	{
		ripeti = false;
		cout << "Importo: ";
		cin >> imp;
		if (imp <= 0.1) {
			cout << "Importo minimo necesario 0.1$\n";
			ripeti = true;
		}

	} while (ripeti);
	return;
}

//Imput tipo muovimento
void ins_tipo_mov(char& tipo) {
	bool ripeti = false;
	do
	{
		ripeti = false;
		cout << "A - entrata\nD - uscita\n";
		cout << "Inserisci il tipo di mouvimento:";
		cin >> tipo;
		if (tipo != 'A' && tipo != 'D') {
			cout << "TIPO MUOVIMENTO NUN RICONOSCIUTO!!!\n";
			ripeti = true;
		}
	
	} while (ripeti);

	return;
}


//funzione che prende in input un tansazione
void ins_transazione(transazioni& t) {
	cout << "Inserisci la data:\n";
	ins_date(t.data);
	ins_descrizione(t.descrizione);
	ins_importo(t.importo);
	ins_tipo_mov(t.tipo);
	return; 
}

//output del saldo
void out_saldo(double s) {
	system("cls");
	cout << "################################################################\n\n";
	cout << "\t\t\tSALTO ATUALE: " << s << "\n\n";
	cout << "################################################################\n\n";
	system("pause");
	return;
}
