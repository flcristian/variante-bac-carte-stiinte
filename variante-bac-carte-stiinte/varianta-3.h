#include "varianta-3-combinare-subiectul-1.h"

// ===========
// Subiectul I
// ===========

// Problema 3
// Sa se genereze submultimile multimii {1,2,3,4,5}.
// Cate submultimi au elementul 2 dar nu 4?

void subiectul1Problema3() {
	rezolvareCombinareSub1Pb3();
}

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct data, struct elev;
// elev E1, E2;
//
// Scrieti [...] afiseaza numele elevului
// mai mare, stiind ca ambii, elevi sunt
// nascuti in acelasi an, in zile diferite.

void subiectul2Problema2() {
	Elev E1, E2;
	citireSub2Pb2(E1, E2);
	Elev mare = elevulMaiMare(E1, E2);
	cout << "Elevul mai mare este : " << mare.nume << endl;
}

// Problema 3
// Ce se va afisa ?
// char a[3][12] = {"bacalaureat", "la", "informatica"};
// cout << a[0] << " " << a[1][1] << " " << a[2][0];
//
// Rezolvare:
// Se va afisa : bacalaureat a i

// =============
// Subiectul III
// =============

// Problema 1
// Se citesc doua numere naturale n si m.
// Se cere sa se determine numarul de cifre utilizate
// pentru construirea numerelor naturale din
// intervalul [n,m].

void subiectul3Problema1() {
	int n, m;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti m : ";
	cin >> m;

	rezolvareSubiectul3Problema1(n, m);
}

// Problema 2
// Subprogramul numar are doi parametri.
// n, numar natural [2, 10^9]
// m, numar natural [2, 10^9], cel mai mare
// numar natural care se poate obtine folosind
// cifrele impare care apar in scrierea lui n.
// Daca nu apar cifre impare in n, returneaza -1.

void subiectul3Problema2() {
	int n, m;
	cout << "Introduceti n : ";
	cin >> n;
	numar(n, m);
	cout << "Numarul m este : " << m << endl;
}

// Problema 3
// Scrieti [...] citeste de la tastatura trei
// numere naturale n, m, k.
// Programul afiseaza in fisierul bac.txt
// (varianta3subiectul3problema3.txt) numerele
// naturale cu exact k cifre care sunt divizibile
// atat cu n cat si cu m.

void subiectul3Problema3() {
	int n, m, k;
	citireSub3Pb3(n, m, k);
	rezolvareSub3Pb3(n, m, k);
}