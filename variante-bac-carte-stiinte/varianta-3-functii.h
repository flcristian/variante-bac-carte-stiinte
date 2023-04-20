#include "varianta-3-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Elev& E1, Elev& E2) {
	Data d1, d2;
	cout << "Introduceti numele primului elev : ";
	cin >> E1.nume;
	cout << "Introduceti data de nastere a primului elev." << endl;
	cout << "Ziua : ";
	cin >> d1.zi;
	cout << "Luna : ";
	cin >> d1.luna;
	cout << "Anul : ";
	cin >> d1.an;
	E1.data = d1;
	cout << "Introduceti numele elevului secund : ";
	cin >> E2.nume;
	cout << "Introduceti data de nastere a elevului secund." << endl;
	cout << "Ziua : ";
	cin >> d2.zi;
	cout << "Luna : ";
	cin >> d2.luna;
	cout << "Anul : ";
	cin >> d2.an;
	E2.data = d2;
}

Elev elevulMaiMare(Elev E1, Elev E2) {
	Data d1 = E1.data;
	Data d2 = E2.data;
	if (d1.luna < d2.luna) {
		return E1;
	}
	if (d1.zi < d2.zi) {
		return E1;
	}
	return E2;
}

// Pentru Subiectul 3

// Problema 1

int countCifre(int n) {
	int c = 0;
	while (n > 0) {
		c++;
		n /= 10;
	}
	return c;
}

void rezolvareSubiectul3Problema1(int n, int m) {
	int c = 0;
	for (int i = n; i <= m; i++) {
		c += countCifre(i);
	}
	cout << c << endl;
}

// Problema 2

void numar(int n, int& m) {
	int frecventa[10]{};
	while (n != 0) {
		frecventa[n % 10]++;
		n /= 10;
	}
	m = 0;
	for (int i = 9; i > 0; i -= 2) {
		while (frecventa[i] > 0) {
			m = m * 10 + i;
			frecventa[i]--;
		}
	}
	if (m == 0) {
		m = -1;
	}
}

// Problema 3

void citireSub3Pb3(int& n, int& m, int& k) {
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti m : ";
	cin >> m;
	cout << "Introduceti k : ";
	cin >> k;
}

void rezolvareSub3Pb3(int n, int m, int k) {
	ofstream f("input.txt");
	for (int i = pow(10, k - 1); i < pow(10, k); i++) {
		if (i % n == 0 && i % m == 0) {
			f << i << " ";
		}
	}
	f.close();
}