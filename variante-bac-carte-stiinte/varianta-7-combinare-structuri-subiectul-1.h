#include "varianta-7-functii.h"

struct Carte {
	int indice = -1;
	string limba = "";

	Carte() {
	}

	Carte(int indice, string limba) {
		this->indice = indice;
		this->limba = limba;
	}
};

Carte A(1, "romana");
Carte B(2, "romana");
Carte C(3, "romana");
Carte D(4, "romana");
Carte E(5, "romana");
Carte F(6, "romana");
Carte G(7, "romana");
Carte H(8, "romana");
Carte I(9, "romana");
Carte J(10, "romana");
Carte K(11, "germana");
Carte L(12, "germana");
Carte M(13, "germana");
Carte N(14, "germana");
Carte O(15, "engleza");
Carte P(16, "engleza");
Carte Q(17, "engleza");
Carte R(18, "engleza");
Carte S(19, "engleza");
Carte T(20, "engleza");