#include "varianta-1-permutare-subiectul-1.h"

// ===========
// Subiectul I
// ===========

// Problema 3
// Afisare permutari de n + numarul de permutari formate.
// CONDITIE : - Sa nu existe puncte fixe -

void subiectul1Problema3() {
	rezolvarePermutareSub1Pb3();
}

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct data, struct elev;
// Scrieti [...] citeste de la tastatura informatiile
// despre un elev in variabila e si afiseaza numele
// elevului daca anul nasterii este egal cu 2000
// sau data nasterii in caz contrar, informatiile
// din data se afiseaza pe aceeasi linie separate
// printr-un spatiu.

void subiectul2Problema2() {
	Elev e;
	citireSub2Pb2(e);
	if (e.dn.an == 2000) {
		cout << e.nume << endl;
	}
	else {
		cout << e.dn.an << endl;
	}
}

// =============
// Subiectul III
// =============

// Problema 1
// Se citeste un numar natural n si se cere sa se scrie suma divizorilor primi
// ai lui n.
// Exemplu : Daca n = 12, atunci se scrie 5

void subiectul3Problema1() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;

	cout << sumaDivizoriPrimi(n);
}

// Problema 2
// Subprogramul numarare are patru parametri :
// n, prin care primeste un nr. natural (2 <= n <= 20)
// m, prin care primeste un numar natural (2 <= m <= 20)
// a, prin care primeste un tablou unidimensional
// care memoreaza un sir de n numere naturale, fiecare cu
// cel mult 4 cifre.
// b, prin care primeste un tablou unidimensional
// care memoreaza un sir de m numere naturale, fiecare cu
// cel mult 4 cifre.
// 
// Subprogramul returneaza numarul de elemente din
// tabloul a, care sunt strict mai mici decat
// toate elementele din tabloul b.
// 
// Exemplu : daca n = 7, m = 8;
// a = (1, 4, 5, 3, 82, 6, 2)
// b = (56, 6, 34, 23, 8, 9, 12, 18) 


void subiectul3Problema2() {
	int n, m;
	int a[20], b[20];
	citireSub3Pb2(n, m, a, b);
	cout << "Numarul de elemente din a mai mici ca toate din b este : " << rezolvareSub3Pb2(n, m, a, b) << endl;
}

// Problema 3
// Numim secventa fazan a unui sir de elemente naturale
// un subsir al acestuia, format din termeni aflati pe
// pozitii consecutive in sirul dat cu proprietatea ca
// prima cifra a termenului curent este egala cu ultima
// cifra a termenului anterior.
//
// Fisierul bac.txt (varianta1subiectul3problema3.txt)
// contine acest sir.
// 
// Determinati secventa fazan de lungime maxima din
// acest sir.
//
// Exemplu : 12 (13 31 129 321) 61 76 (25 54 425 511
// 121) 311 311.
// Se va afisa : 5

void subiectul3Problema3() {
	int n;
	int x[100];
	citireSub3Pb3(x, n);
	cout << "Lungimea secventei fazan maxime este : " << aflareSecventaFazanMax(x, n) << endl;
}