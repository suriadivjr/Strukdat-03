/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Exercise DB-03
Tahun           : 2019
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct
{
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s) 
{
	cout << "Panjang: "; cin >> s->panjang;
	cout << "Lebar: "; cin >> s->lebar;
}

float keliling(segiempat s) 
{
	return s.lebar*2 + s.panjang*2;
}


float luas(segiempat s) 
{
	return s.lebar*s.panjang;
}

float diagonal(segiempat s) 
{
	return sqrt(s.lebar*s.lebar+s.panjang*s.panjang);
}

void print(segiempat s)
{
	cout << "Panjang: " << s.panjang << endl;
	cout << "Lebar: " << s.lebar << endl;
	cout << "Keliling: " << keliling(s) << endl;
	cout << "Luas: " << luas(s) << endl;
	cout << "Diagonal: " << diagonal(s) << endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}


