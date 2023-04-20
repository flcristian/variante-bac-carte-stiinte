#include "varianta-7-combinare-structuri-subiectul-1.h"

int n = 20, m = 2, c = 0;
Carte x[20] = { A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T };
Carte s[100];

void tipar() {
	for (int i = 0; i < m; i++) {
		cout << s[i].indice << "-" << s[i].limba << " ";
	}
	cout << endl;
}

bool valid(int k) {
	for (int i = 0; i < k; i++) {
		if (s[i].indice >= s[i + 1].indice || s[i].limba == s[i + 1].limba) {
			return 0;
		}
	}
	return 1;
}

bool solutie(int k) {
	if (k == m - 1) {
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

void rezolvareCombinareSub1Pb3() {
	back(0);
	cout << "\nElevul are " << c << " optiuni." << endl;
}