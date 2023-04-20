#include "varianta-6-permutare-subiectul-1.h"

// ===========
// Subiectul I
// ===========

// Problema 3
// ENUNT :
// Intr-o urna sunt 5 bile albe si 3 bile negre.
// Care este numarul configuratiilor distincte care se 
// pot obtine prin extragerea bilelor din urna si asezarea
// lor in linie in ordinea extragerii?
// 
// Problema gresita.

void subiectul1Problema3() {
	rezolvarePermutareSub1Pb3();
}

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct punct;
// punct A, B;
// 
// Fara a utiliza alta variabila, scrieti o
// expresie care are valoarea 1 daca si numai
// daca segmentul descris de A si B se afla
// pe prima bisectoare a sistemului de coordonate
// xOy.

void subiectul2Problema2() {
	Punct A, B;
	citireSub2Pb2(A, B);
	cout << "Segmentul";
	if (!seAflaPePrimaBisectoare(A, B)) {
		cout << " nu";
	}
	cout << " se afla pe prima bisectoare." << endl;
}

// =============
// Subiectul III
// =============

// Problema 2
// Subprogramul divizor are doi parametri,
// n, natural [2, 100]
// a, tablou unidimensional de n numere naturale, max 4 cifre
// 
// Returneaza cel mai mare divizor comun
// al elementelor lui a.

void subiectul3Problema2() {
	int a[100];
	int n;
	citireSub3Pb2(a, n);
	cout << "Cel mai mare divizor comun al numerelor din tabelul a este : " << divizor(a, n) << endl;
}

// Problema 3
// Un numar natural N este p-compus, daca se
// poate scrie ca suma de p numere naturale
// consecutive.
// 
// Scrieti [...] citeste din fisierul bac.txt
// (varianta6subiectul3problema3.txt) de pe prima
// linie un numar natural p si de pe urmatoarele
// linii un sir cu cel mult 10^5 de numere
// naturale cu cel mult 9 cifre fiecare, sa se
// afiseze pe ecran pe aceeasi linie separate
// printr-un spatiu, primul numar din suma, daca
// numarul din sir este p-copmpus sau mesajul NU
// in caz contrar.

void subiectul3Problema3() {
	int x[100];
	int n, p;
	citireSub3Pb3(x, n, p);
	rezolvareSub3Pb3(x, n, p);
}