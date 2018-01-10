// hierarchia.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "urz_ster.h"
#include "urz_ster_zdal.h"
using namespace std;
int suma(int a, int b)
{
	cout << "int " << flush;
	return a + b;
}
double suma(double a, double b)
{
	cout << "double " << flush;
	return a + b;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int(*wsk)(int, int);
	wsk = &suma;
	cout << wsk(3, 3);
	cout << suma(1, 2) << endl;
	cout << suma(2.5, 2.7) << endl;
	urz_ster jakies;
	urz_ster *wsk1;
	urz_ster_zdal *wsk2;
	urz_ster_zdal jakies_zdal;
	wsk1 = &jakies;
	cout << "a) ";
	wsk1->funkcja();
	cout << "b) ";
	wsk1 = &jakies_zdal;
	wsk1->funkcja();
	cout << "c) - blad\n";
	//wsk2 = &jakies;
	//wsk2->funkcja();
	wsk2 = &jakies_zdal;
	cout << "d) - blad\n";
	//wsk2->funkcja();


	cout  << sizeof(jakies) << endl;
	system("pause");
	return 0;
}

