#include "varianta-1-functii.h"

// Problema 3 - Subiectul I

int n, c = 0;
int s[100];

void tipar() {
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	cout << endl;
}

bool valid(int k) {
	for (int i = 0; i <= k; i++) {
		if (i < k && s[i] == s[k]) {
			return 0;
		}
		if (s[i] == i + 1) {
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
		s[k] = i + 1;
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
	cout << "Introduceti n : ";
	cin >> n;

	back(0);
	cout << "S-au format " << c << " permutari fara puncte fixe." << endl;
}