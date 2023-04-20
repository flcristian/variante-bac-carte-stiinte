#include "varianta-6-functii.h"

struct Bila {
	int indice = -1;
	string culoare = "";

	Bila() {
	}

	Bila(int indice, string culoare) {
		this->indice = indice;
		this->culoare = culoare;
	}
};

Bila A(1, "alba");
Bila B(2, "alba");
Bila C(3, "alba");
Bila D(4, "alba");
Bila E(5, "alba");
Bila F(6, "neagra");
Bila G(7, "neagra");
Bila H(8, "neagra");

int n = 8, c = 0;
Bila x[8] = { A,B,C,D,E,F,G,H };
Bila s[100];

void tipar() {
	for (int i = 0; i < n; i++) {
		cout << s[i].culoare << " ";
	}
	cout << endl;
}

bool valid(int k) {
	for (int i = 0; i < k; i++) {
		if (s[i].indice == s[k].indice) {
			return 0;
		}
	}
	return 1;
}

bool solutie(int k) {
	if (k == n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {
	for (int i = 0; i < n; i++) {
		s[k] = x[i];
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
				c++;
			}
			else {
				back(k + 1);
			}
		}
	}
}

void rezolvarePermutareSub1Pb3() {
	back(0);
	cout << "\nS-au format " << c << " permutari." << endl;
}