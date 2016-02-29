#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

//dichiarazioni tipi 
const int DIM = 50;
typedef char stringa[DIM];

struct osservazione {
	int mese;
	int anno;
	struct temperatura {
		int valore;
		char unit_misura;
	};
};

osservazione vett_osservazione[3];  // non ho capito dalla traccia se devo calcolare la media delle 3 o cosa... ci torno dopo

//prototipi funzioni
int temp_celsius(char, int);
void input(osservazione);
bool controllo kelvin(int);

