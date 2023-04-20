#include "varianta-8-combinare-structuri-subiectul-1.h"

int n = 25, m = 5, c = 0;
Raspuns x[25] = { R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12,R13,R14,R15,R16,R17,R18,R19,R20,R21,R22,R23,R24,R25 };
Raspuns s[100];

void tipar() {
	for (int i = 0; i < m; i++) {
		cout << s[i].ales << " ";
	}
	cout << endl;
}

bool valid(int k) {
	for (int i = 0; i < k; i++) {
		if (s[i].exercitiu >= s[i + 1].exercitiu) {
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

	cout << "S-au format " << c << " combinari." << endl;
}