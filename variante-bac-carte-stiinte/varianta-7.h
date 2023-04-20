#include "varianta-7-combinare-subiectul-1.h"

// ===========
// Subiectul I
// ===========

// Problema 3
// Un copil are in biblioteca personala 10 carti in limba romana, 4 carti
// in limba germana si 6 carti in limba engleza. Acesta trebuie sa duca la
// scoala doua carti scrise in limbi diferite.
// Cate posibilitati de alegere a cartilor are?

void subiectul1Problema3() {
	rezolvareCombinareSub1Pb3();
}

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct punct;
// punct A, B;
// 
// Fara a utiliza alte variabile
// scrieti o secventa care returneaza
// 1 daca AB se afla pe una dintre
// axele sistemului de coordonate si
// 0 daca contrar.

void subiectul2Problema2() {
	Punct A, B;
	citireSub2Pb2(A, B);
	cout << "Dreapta formata de AB";
	if (!seAflaPeAxe(A, B)) {
		cout << " nu";
	}
	cout << " se afla pe una dintre axe." << endl;
}

// =============
// Subiectul III
// =============

// Problema 2
// Subprogramul permuta are trei parametri :
// n, natural [2, 100]
// k, natural [1, n]
// a[n] naturale.
//
// Subprogramul permuteaza spre dreapta cu
// k pozitii.
// Afisati vectorul dupa permutari.

void subiectul3Problema2() {
	int n, k;
	int a[100];
	citireSub3Pb2(a, n, k);
	permuta(a, n, k);
	cout << "Tabloul dupa apelare este :" << endl;
	outputSub3Pb2(a, n);
}

// Problema 3
// Scrieti [...] citeste din bac.in
// (varianta7subiectul3problema3in.txt) un
// sir cu cel mult 100000 de numere naturale
// de forma 10^k, unde k este natural [0,9].
// 
// Programul afiseaza in bac.out
// (varianta7subiectul3problema3out.txt)
// elementele sirului S in ordine crescatoare.

void subiectul3Problema3() {
	int x[100];
	int n;
	citireSub3Pb3(x, n);
	sortare(x, n);
	outputSub3Pb3(x, n);
}