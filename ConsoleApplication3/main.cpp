#include "pch.h"
#include<iostream>
#include <cmath>
#include <ctime>
#include <conio.h>

using namespace std;




void main() {

	setlocale(LC_ALL, "RU");

	int x, y{0}, z{ 0 };
	cout << "X: ";
	cin >> x;
	system("cls");

	while (x > 0) {
		z += (x % 2) * pow(10,y);
		x /= 2;
		y++;
	}
	
	cout << "X: " << z <<  endl;
}


   
 








