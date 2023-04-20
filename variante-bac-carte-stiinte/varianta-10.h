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