#include "varianta-8-combinare-subiectul-1.h"

// ===========
// Subiectul I
// ===========

// Problema 3
// La examenul de Bacalaureat la Subiectul I sunt cinci itemi
// de tip grila, fiecare item avand 4 variante de raspuns. In cate
// moduri pot fi completate raspunsurile la acest subiect, daca
// exista posibilitatea de a nu completa niciun raspuns?

void subiectul1Problema3() {
	rezolvareCombinareSub1Pb3();
}

// ============
// Subiectul II
// ============

// Problema 2
// Se considera declararile :
// struct triunghi
// triunghi t;
// 
// Fara alte variabile, scrieti o expresie
// care returneaza 1 doar daca triunghiul este
// isoscel dar nu si echilateral. Returneaza
// 0 daca nu.

void subiectul2Problema2() {
	Triunghi t;
	citireSub2Pb2(t);
	cout << "Triunghiul";
	if (!isoscel(t)) {
		cout << " nu";
	}
	cout << " este isoscel fara a fi echilateral." << endl;
}

// =============
// Subiectul III
// =============

// Problema 2
// Subprogramul patrat are un parametru
// n natural [2, 10^9].
// 
// Returneaza cel mai mare patrat perfect care
// este divizor al lui n.

void subiectul3Problema2() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Cel mai mare patrat perfect divizor al lui n este : " << patrat(n) << endl;
}

// Problema 3
// Scrieti [...] citeste din bac.txt
// (varianta8subiectul3problema3.txt) un sir
// cu cel mult 100000 naturale [2, 10^9].
// 
// Pentru fiecare valoare x din sir se determina
// numarul de cifre egale cu 0 de la sfarsitul
// lui x!. 

// Nu fac inca.