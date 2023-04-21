#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Problema 2

void permutareStanga(int x[], int n) {
	int r = x[0];
	for (int i = 0; i < n - 1; i++) {
		x[i] = x[i + 1];
	}
	x[n - 1] = r;
}

bool estePalindrom(int x[], int n) {
	for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
		if (x[i] != x[j]) {
			return 0;
		}
	}
	return 1;
}

void rezolvareSubiectul3Problema2(int x[], int n, int k) {
	while (k > 0) {
		permutareStanga(x, n);
		k--;
	}

	if (estePalindrom(x, n)) {
		cout << "Este k-palindrom!" << endl;
	}
	else {
		cout << "Nu este k-palindrom!" << endl;
	}
}

// Problema 3

void citireSub3Pb3(int x[], int& n) {
	ifstream f("varianta10subiectul3problema3.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

int max(int x[], int n) {
	int max = x[0];
	for (int i = 1; i < n; i++) {
		if (x[i] > max) {
			max = x[i];
		}
	}
	return max;
}

void rezolvareSub3Pb3(int x[], int& n) {
	int m = max(x, n);
	int maxNr = 0;
	int maxK = 0;
	int k = 0;
	while (pow(2, k) < m) {
		int c = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] >= pow(2, k) && x[i] < pow(2, k + 1)) {
				c++;
			}
		}
		if (c > maxNr) {
			maxNr = c;
			maxK = k;
		}
		if (c == maxNr) {
			maxK = k;
		}
		k++;
	}
	cout << "Numarul k care indeplineste aceasta cerinta este : " << maxK << endl;
}