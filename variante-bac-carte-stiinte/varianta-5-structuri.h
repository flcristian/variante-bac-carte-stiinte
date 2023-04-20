#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Punct {
	float x;
	float y;
};

struct Poligon {
	int nr;
	Punct v[101];
};