#include "varianta-10-functii.h"

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct Jucator {
//	int nrTricou;
//	int marimeTricou;
// };
// struct Echipa {
//	int nrJucatori;
//	Jucator juc[20];
// }
// Echipa E;
// 
// Completati urmatoarea secventa astfel incat
// programul va citi numarul de jucatori
// si informatiile despre acestia.
// 
// cin >> ...
// for(i = 0; i < E.nrJucatori; i++)
// ......
//
// Completare :
// cin >> E.nrJucatori;
// for(i = 0; i < E.nrJucatori; i++) {
//	cin >> E.juc[i].nrTricou;
//	cin >> E.juc[i].marimeTricou;
// }

// =============
// Subiectul III
// =============

// Problema 2
// Sa se verifice daca un vector este k-palindrom.
// (Daca dupa k permutari circulare spre stanga devine palindrom)

void subiectul3Problema2() {
	int x[100], n, k;
	cout << "Introduceti n : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Introduceti x[" << i << "] : ";
		cin >> x[i];
	}
	cout << "Introduceti k : ";
	cin >> k;
	cout << endl;

	rezolvareSubiectul3Problema2(x, n, k);
}

// Problema 3
// Fisierul bac.txt (varianta10subiectul3problema3.txt)
// contine cel mult 10^6 numere naturale de cel mult 9
// cifre, separate prin cate un spatiu.
// 
// Afisarea valorii k pentru care intervalul [2^k, 2^(k+1))
// contine cele mai multe numere din sir.

void subiectul3Problema3() {
	int x[100];
	int n;
	citireSub3Pb3(x, n);
	rezolvareSub3Pb3(x, n);
}