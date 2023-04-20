#include "varianta-4-functii.h"

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct complex;
// complex z;
// 
// Scrieti [...] citeste de la tastatura numarul
// complex z si afiseaza modulul numarului complex
// memorat in variabila z.

void subiectul2Problema2() {
	Complex z;
	cout << "Introduceti partea reala : ";
	cin >> z.pre;
	cout << "Introduceti partea imaginara : ";
	cin >> z.pim;
	cout << "Modulul numarului z este : ";
	double modul = sqrt(pow(z.pre, 2) + pow(z.pim, 2));
	cout << modul << endl;
}

// =============
// Subiectul III
// =============

// Problema 2
// Subprogramul numarare are doi parametri :
// n, natural [1,10^9]
// m, natural [1,10^9], m >= n
// 
// Subprogramul returneaza numarul de cifre necesare
// pentru constituirea numerelor naturale din intervalul
// [n, m].

void subiectul3Problema2() {
	int n, m;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti m : ";
	cin >> m;
	cout << "Numarul de cifre necesar este : " << numarare(n, m) << endl;
}

// Problema 3
// Scrieti [...] citeste din fisierul bac.txt
// (varianta4subiectul3problema3.txt) un sir de cel
// mult 10^5 numere intregi formate din cel mult 2 cifre
// fiecare si afiseaza pe ecran separate printr-un
// spatiu, numarul sau numerele din fisier cu numar maxim
// de aparitii.
// 
// Exemplu :
// 27 -8 43 27 -8 9 10 43
// Se afiseaza : -8 43 27

void subiectul3Problema3() {
	int x[100], r[100];
	int n, m;
	citireSub3Pb3(x, n);
	rezolvareSub3Pb3(x, n, r, m);
	cout << "Numerele cu numar de aparitii maxim sunt : " << endl;
	for (int i = 0; i < m; i++) {
		cout << r[i] << " ";
	}
}


