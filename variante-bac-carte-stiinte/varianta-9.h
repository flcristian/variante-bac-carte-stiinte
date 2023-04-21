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

// Problema 1
// Scrieti un program care citeste un numar natural n,
// avand cel putin 8 cifre si afiseaza doua numere
// naturale m si t, unde m reprezinta cel mai apropiat
// termen din sirul lui Fibonacci mai mic decat n si t
// reprezinta cel mai apropiat termen din sirul lui
// Fibonacci mai mare decat n.

void subiectul3Problema1() {
	int n, m, t;
	cout << "Introduceti n : ";
	cin >> n;

	rezolvareSubiectul3Problema1(n, m, t);
	cout << m << " " << t << endl;
}

// Problema 2
// Se citeste un vector de elemente.
// Scrieti numarul de perechi de elemente (nu neaparat consecutive)
// prime intre ele.

void subiectul3Problema2() {
	int x[100], n;
	cout << "Introduceti n : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Introduceti x[" << i << "] : ";
		cin >> x[i];
	}
	cout << endl;

	cout << numarPerechi(x, n) << endl;
}

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