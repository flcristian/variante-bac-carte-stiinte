#include "varianta-9-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Magazin& M) {
	ifstream f("input.txt");
	M.nrProduse = 0;
	while (!f.eof()) {
		Produs produs;
		f >> produs.cod;
		f >> produs.cant;
		f >> produs.pret;

		M.p[M.nrProduse] = produs;
		M.nrProduse++;
	}
	f.close();
}

void rezolvareSub2Pb2(Magazin M) {
	for (int i = 0; i < M.nrProduse; i++) {
		if (M.p[i].cant != 0) {
			cout << "Valore : " << M.p[i].cant * M.p[i].pret << endl;
		}
		else {
			cout << "Cod : " << M.p[i].cod << endl;
		}
	}
}

// Pentru Subiectul 3

// Problema 1

int rezolvareSubiectul3Problema1(int n, int& m, int& t) {
	int x[100], d = 2;
	x[0] = 1, x[1] = 2;
	while (x[d - 1] <= n) {
		x[d] = x[d - 1] + x[d - 2];
		d++;
	}
	
	for (int i = 0; i < d; i++) {
		if (x[i] == n) {
			m = x[i - 1];
			t = x[i + 1];
			return 0;
		} 
		else if (x[i] > n) {
			m = x[i - 1];
			t = x[i];
			return 0;
		}
	}
	return 0;
}

// Problema 2

bool primeIntreEle(int n, int m) {
	int c = 0;
	for (int i = 1; i <= n && i <= m; i++) {
		if (n % i == 0 && m % i == 0) {
			c++;
		}
	}
	if (c == 1) {
		return 1;
	}
	return 0;
}

int numarPerechi(int x[], int n) {
	int c = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (primeIntreEle(x[i], x[j])) {
				c++;
			}
		}
	}
	return c;
}

// Problema 3

void citireSub3Pb3(int x[], int& n) {
	ifstream f("input.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
	f.close();
}

void atribuireFrecventa(int frecventa[], int x[], int n) {
	for (int i = 0; i < n; i++) {
		frecventa[x[i]]++;
	}
}

void calculareCateAuFrecventaImpara(int frecventa[], int x[], int n, int& c) {
	c = 0;
	for (int i = 1; i < 10; i++) {
		if (frecventa[i] % 2 == 1) {
			c++;
		}
	}
}

void adaugareCifreNumarPart1(int& nr, int frecventa[], int indice, int jumatateFrecventa) {
	while (frecventa[indice] > jumatateFrecventa) {
		nr = nr * 10 + indice;
		frecventa[indice]--;
	}
}

void adaugareCifreNumarPart2(int& nr, int frecventa[], int indice) {
	while (frecventa[indice] > 0) {
		nr = nr * 10 + indice;
		frecventa[indice]--;
	}
}

void rezolvareSub3Pb3(int x[], int n) {
	int frecventa[10]{};
	atribuireFrecventa(frecventa, x, n);
	int c;
	calculareCateAuFrecventaImpara(frecventa, x, n, c);
	if (c > 1) {
		cout << "Nu se poate forma." << endl;
	}
	else {
		int nr = 0;
		int memorat = 0;
		for (int i = 9; i > 0; i--) {
			if (frecventa[i] % 2 == 1) {
				memorat = i;
				frecventa[i]--;
			}
			int jumatateFrecventa = frecventa[i] / 2;
			adaugareCifreNumarPart1(nr, frecventa, i, jumatateFrecventa);
		}
		if (c == 1) {
			nr = nr * 10 + memorat;
		}
		for (int i = 1; i < 10; i++) {
			adaugareCifreNumarPart2(nr, frecventa, i);
		}
		cout << "Palindromul format este : " << nr << endl;
	}
}