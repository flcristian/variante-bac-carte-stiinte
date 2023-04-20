#include "varianta-3-functii.h"

// Problema 3 - Subiectul I

int n = 5, c = 0;
int x[5] = { 1,2,3,4,5 };
int s[100];

void tipar(int m) {
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}
	cout << endl;
}

bool valid(int k) {
	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i + 1]) {
			return 0;
		}
	}
	return 1;
}

bool solutie(int k, int m) {
	if (k == m - 1) {
		return 1;
	}
	return 0;
}

bool contine2DarNu4(int m) {
	bool contine2 = false;
	bool contine4 = false;
	for (int i = 0; i < m; i++) {
		if (s[i] == 2) {
			contine2 = true;
		}
		if (s[i] == 4) {
			contine4 = true;
		}
	}
	if (contine2 && !contine4) {
		return 1;
	}
	return 0;
}

void back(int k, int m) {
	for (int i = 0; i < n; i++) {
		s[k] = x[i];
		if (valid(k)) {
			if (solutie(k, m)) {
				tipar(m);
				if (contine2DarNu4(m)) {
					c++;
				}
				back(k + 1, m + 1);
			}
			else {
				back(k + 1, m);
			}
		}
	}
}

void rezolvareCombinareSub1Pb3() {
	back(0, 1);
	cout << "Exista " << c << " submultimi care contin 2 dar nu 4." << endl;
}