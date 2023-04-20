#include "varianta-9-functii.h"

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct produs, struct magazin;
// magazin M;
// 
// Scrieti [...] afiseaza pentru magazinul
// M, pentru fiecare dintre cele nrProduse,
// pe cate o linie, valoarea totala a stocului
// sau codul produsului daca cantitatea este 0.

void subiectul2Problema2() {
	Magazin M;
	citireSub2Pb2(M);
	rezolvareSub2Pb2(M);
}

// =============
// Subiectul III
// =============

// Problema 3
// Fisierul bac.txt (varianta9subiectul3problema3.txt)
// care contine :
// n natural < 105
// x[n] nr din [1,9]
// 
// Cel mai mare palindrom par care se poate forma cu
// toate cifrele.
// Daca nu exista, se va afisa -1.

void subiectul3Problema3() {
	int x[100];
	int n;
	citireSub3Pb3(x, n);
	rezolvareSub3Pb3(x, n);
}