#pragma once

#include <string>


using namespace std;

// data, descrizione, importo e tipo

struct date {
	int giorno = 1;
	int mese = 1;
	int anno = 2023;
};

struct transazioni {
	date data;
	string descrizione;
	double importo = 0;
	char tipo = 'A';
};

void menu();

void ins_date(date& d);					//input data
void ins_descrizione(string& desc);		//input descrizione della transazione
void ins_importo(double& imp);			//input dell'importo
void ins_tipo_mov(char& tipo);			//Input tipo transazione
void ins_transazione(transazioni& t);	//implemetazione di tute le funzioni di input

void out_saldo(double s);		//output del saldo 

