#include "varianta-5-functii.h"

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct punct, struct poligon;
// poligon p;
// int i;
// float per;
// 
// Fara a utiliza variabile suplimentare scrieti
// [...] afiseaza pe ecran perimetrul poligonului
// memorat in variabila p.

void subiectul2Problema2() {
	Poligon p;
	int i;
	float per;
	citireSub2Pb2(p.v, p.nr);

	per = 0;
	for (i = 0; i < p.nr - 1; i++) {
		per += sqrt(pow(p.v[i + 1].x - p.v[i].x, 2) + pow(p.v[i + 1].y - p.v[i].y, 2));
	}
	per += sqrt(pow(p.v[0].x - p.v[p.nr - 1].x, 2) + pow(p.v[0].y - p.v[p.nr - 1].y, 2));
	cout << "Perimetrul este : " << per << endl;
}

// =============
// Subiectul III
// =============

// Problema 1
// Se citeste de la tastatura un numar natural n de cel mult
// 6 cifre si o cifra nenula c. Sa se scrie pe ecran cel mai
// mare numar care se poate obtine prin inserarea lui c
// in n.

void subiectul3Problema1() {
	int n, c;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti c : ";
	cin >> c;

	rezolvareSubiectul3Problema1(n, c);
}

// Problema 2
// Subprogramul divizori are un parametru :
// n, natural [2, 10^4]
// 
// Returneaza suma divizorilor primi ai lui n. 

void subiectul3Problema2() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Suma divizorilor primi ai lui n este : " << divizori(n) << endl;
}

// Problema 3
// Scrieti [...] citeste din fisierul bac.txt
// (varianta5subiectul3problema3.txt) un sir S cu cel
// mult 10^5 de numere naturale formate din cel mult 3
// cifre. Asupra sirului se aplica in mod repetat 
// urmatoarea prelucrare : se elimina din sir valorile
// prime, iar valorile neprime se incrementeaza cu valoarea 1.
// Prelucrarea se repeta pana cand nu mai exista numere
// in sir.
// 
// Sa se afiseze de cate ori a fost aplicata prelucrarea.

void subiectul3Problema3() {
	int x[100];
	int n, c;
	citireSub3Pb3(x, n);
	rezolvareSub3Pb3(x, n, c);
	cout << "Numarul de repetari este : " << c << endl;
}