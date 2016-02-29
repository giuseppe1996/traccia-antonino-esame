#include "dichiarazioni.h"

int temp_celsius(char unit_misura, int valore) {
	int temp;
	if (unit_misura == 'c' | unit_misura == 'C') {
		temp= float(temperatura-32)/1.8
	}
	if (unit_misura == 'f' | unit_misura == 'F') {
		temp=float(temperatura)-272.15
	}
	return temp;
}

void input(osservazione vett_osservazione) {
	int i, j, z;
	for (i = 0;i < 3;i++) {
		cout << "Osservazione numero " << i << endl;
		cout << "Inserisci il Mese: ";
		do {
			cin >> vett_osservazione[i].mese;
			if (mese < 1 && mese>12) {
				cout << "Il mese deve essere compreso tra 1 e 12 e tu hai inserito " << mese << endl;
			}

		} while (mese < 1 && mese > 12);

		cout << "Inserisci l'anno: ";
		do {
			cin >> vett_osservazione[i].anno;
			if (anno <= 1900 && anno >= 2015) {
				cout << "L'anno deve essere compreso tra 1900 e 2015 e tu hai inserito " << anno << endl;
			}
		} while (anno <= 1900 && anno >= 2015);

		cout << "Inserisci il valore della temperatura: ";
		do {
			cin >> vett_osservazione[i].temperatura.valore;
			cout << "Inserisci l'unità di misura: ";
			cin >> vett_osservazione[i].temperatura.unit_misura;
			if (vett_osservazione[i].temperatura.unit_misura == 'K') {
				if (!controllo_kelvin(vett_osservazione[i].temperatura.valore)) {
					cout << "Hai inserito valori sbagliati!";
					goto(input);
				}
				int temp;
				temp = vett_osservazione[i].temperatura.valore;
				vett_osservazione[i].temperatura.valore=temp_celsius(vett_osservazione[i].temperatura.unit_misura, temp);
			}
			else if (vett_osservazione[i].temperatura.unit_misura == 'F') {
				int temp;
				temp = vett_osservazione[i].temperatura.valore;
				vett_osservazione[i].temperatura.valore = temp_celsius(vett_osservazione[i].temperatura.unit_misura, temp);
			}

			
			 
		}

	}
}


bool controllo_kelvin(int temperatura) {
	if (temperatura < 0) {
		return false;
	}
	return true;
}