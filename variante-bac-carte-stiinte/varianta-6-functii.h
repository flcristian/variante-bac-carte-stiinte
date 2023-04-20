#include "varianta-6-structuri.h"

// Pentru Subiectul 2

// Problema 2

void citireSub2Pb2(Punct& A, Punct& B) {
	cout << "Introduceti coordonatele primului punct : " << endl;
	cout << "X : ";
	cin >> A.x;
	cout << "Y : ";
	cin >> A.y;
	cout << "Introduceti coordonatele punctului secund : " << endl;
	cout << "X : ";
	cin >> B.x;
	cout << "Y : ";
	cin >> B.y;
}

bool seAflaPePrimaBisectoare(Punct A, Punct B) {
	if ((B.y - A.y) / (B.x - A.x) == 1) {
		return true;
	}
	return false;
}

// Pentru Subiectul 3

// Problema 2

void citireSub3Pb2(int a[], int& n) {
	ifstream f("input.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> a[i];
	}
}

int max(int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int divizor(int a[], int n) {
	int m = max(a, n);
	for (int i = m; i > 1; i--) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] % i == 0) {
				count++;
			}
		}
		if (count == n) {
			return i;
		}
	}
	return 1;
}

// Problema 3

void citireSub3Pb3(int x[], int& n, int& p) {
	ifstream f("input.txt");
	n = 0;
	f >> p;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void rezolvareSub3Pb3(int x[], int n, int p) {
	for (int i = 0; i < n; i++) {
		int numar = double(x[i] / p - p / 2);
		int s = 0;
		for (int k = 0; k < p; k++) {
			s = s + numar + k;
		}
		if (s == x[i]) {
			cout << numar << " ";
		}
		else {
			cout << "NU ";
		}
	}
}