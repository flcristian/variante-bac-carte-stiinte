#include "varianta-5-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Punct x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n].x;
		f >> x[n].y;
		n++;
	}
	f.close();
}

// Pentru Subiectul 3

// Problema 1

void inversareSiCountCifre(int n, int& m, int& c) {
	m = 0, c = 0;
	while (n != 0) {
		c++;
		m = m * 10 + n % 10;
		n /= 10;
	}
}

void rezolvareSubiectul3Problema1(int n, int c) {
	int m, count;
	inversareSiCountCifre(n, m, count);
	int p = 0;
	while (m % 10 > c) {
		p++;
		m /= 10;
	}
	int z = pow(10, count - p);
	cout << (n / z * 10 + c) * z + (n % z);
}

// Problema 2

int numarDivizori(int x) {
	int c = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			c++;
		}
	}
	return c;
}

bool estePrim(int x) {
	if (numarDivizori(x) == 2) {
		return true;
	}
	return false;
}

int divizori(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && estePrim(i)) {
			s += i;
		}
	}
	return s;
}

// Problema 3

// Utilizez aceleasi functii pentru
// numarul de divizori si numere prime
// ca la problema anterioara.

void citireSub3Pb3(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void eliminareElementSir(int x[], int& n, int indice) {
	for (int i = indice; i < n - 1; i++) {
		x[i] = x[i + 1];
	}
	n--;
}

void rezolvareSub3Pb3(int x[], int n, int& c) {
	c = 0;
	while (n > 0) {
		for (int i = 0; i < n; i++) {
			if (estePrim(x[i])) {
				eliminareElementSir(x, n, i);
				i--;
			}
			else {
				x[i]++;
			}
		}
		c++;
	}
}