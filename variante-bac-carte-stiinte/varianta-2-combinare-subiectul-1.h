#include "varianta-2-functii.h"

int x[4] = { 5,6,7,8 };
int n = 4, m = 3, c = 0;
int s[100], solutii[100][100];

void tiparSiAdaugareSolutie() {
	for (int i = 0; i < m; i++) {
		solutii[c][i] = s[i];
		cout << s[i] << " ";

	}
	cout << endl;
	c++;
}

bool valid(int k) {
	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i + 1]) {
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
				tiparSiAdaugareSolutie();
			}
			else {
				back(k + 1);
			}
		}
	}
}

void afisareAntepenultimaSubmultime() {
	for (int i = 0; i < m; i++) {
		cout << solutii[c - 3][i] << " ";
	}
	cout << endl;
}

void rezolvareCombinareSub1Pb3() {
	back(0);

	cout << "\nAntepenultima submultime formata este : ";
	afisareAntepenultimaSubmultime();
}