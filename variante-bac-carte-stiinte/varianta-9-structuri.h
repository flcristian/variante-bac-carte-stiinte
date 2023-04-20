#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Produs {
	int cod;
	float cant;
	float pret;
};

struct Magazin {
	Produs p[100];
	int nrProduse;
};