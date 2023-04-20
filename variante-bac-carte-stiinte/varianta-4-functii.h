#include "varianta-4-structuri.h"

// Pentru Subiectul 3

// Problema 2

int countCifre(int x) {
	int c = 0;
	while (x != 0) {
		c++;
		x /= 10;
	}
	return c;
}

int numarare(int n, int m) {
	int c = 0;
	for (int i = n; i <= m; i++) {
		c += countCifre(i);
	}
	return c;
}

// Problema 3

void citireSub3Pb3(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void rezolvareSub3Pb3(int x[], int n, int r[], int& m) {
	int frecventa[100]{};
	int frecventaNegativa[100]{};
	for (int i = 0; i < n; i++) {
		if (x[i] >= 0) {
			frecventa[x[i]]++;
		}
		else {
			frecventaNegativa[-1 * x[i]]++;
		}
	}
	m = 0;
	int max = 1;
	for (int i = 0; i < 100; i++) {
		if (frecventa[i] > max) {
			max = frecventa[i];
			m = 0;
		}
		if (frecventaNegativa[i] > max) {
			max = frecventaNegativa[i];
			m = 0;
		}
		if (frecventa[i] == max) {
			r[m] = i;
			m++;
		}
		if (frecventaNegativa[i] == max) {
			r[m] = -1 * i;
			m++;
		}
	}
}