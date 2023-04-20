#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Problema 1

int countDivizori(int x) {
	int count = 0;
	for (int i = 1; i * i <= x; i++) {
		if (x % i == 0) {
			count++;
			if (i * i < x) {
				count++;
			}
		}
	}
	return count;
}

void rezolvareSubiectul3Problema1(int a, int b) {
	int c = 0;
	for (int i = a; i <= b; i++) {
		if (countDivizori(i) == 3) {
			c++;
		}
	}
	cout << c << endl;
}

// Problema 2

void citireSub3Pb2(int& a, int& b) {
	cout << "Introduceti a : ";
	cin >> a;
	cout << "Introduceti b : ";
	cin >> b;
}

int numarare(int a, int b) {
	int count = 0;
	for (int i = a; i <= b; i++) {
		if (countDivizori(i) == 3) {
			count++;
		}
	}
	return count;
}

// Problema 3

void citireSub3Pb3(int& n, int& m, int a[], int b[]) {
	ifstream f("input.txt");
	f >> n, f >> m;
	for (int i = 0; i < n; i++) {
		f >> a[i];
	}
	for (int i = 0; i < m; i++) {
		f >> b[i];
	}
	f.close();
}

int pozitieFrecventa(int x, int m, int b[]) {
	for (int i = 0; i < m; i++) {
		if (b[i] == x) {
			return i;
		}
	}
	return -1;
}

int nrSiruri(int n, int m, int a[], int b[]) {
	int frecventa[100]{};
	for (int i = 0; i < n; i++) {
		int j = pozitieFrecventa(a[i], m, b);
		if (j != -1) {
			frecventa[j]++;
		}
	}
	int min = frecventa[0];
	for (int i = 0; i < m; i++) {
		if (frecventa[i] < min) {
			min = frecventa[i];
		}
	}
	return min;
}