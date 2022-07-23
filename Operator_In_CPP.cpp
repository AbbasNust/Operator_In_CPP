// Operator_In_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// +, - * / %
	cout << 5 + 2 << endl; // use of + operator 
	cout << 5.0 / 2.0 << endl; // use floating while using / operator
	cout << 5 % 2 << endl; // remainder of 
	
	// ++ increament 
	//-- decreament

	int counter = 7;
	counter++;
	cout << counter << endl;
	counter--;
	cout << counter << endl;


	int counter2 = 7;
	cout <<++ counter2 << endl;
	cout << counter2-- << endl;
	cout << --counter2 << endl;

	system("cls");
	// Relational Operator 
	//  <,>, <=,>=, ==, !=
	int a = 5, b = 8;
	cout << (a > b)<< endl;
	cout << (a < b)<< endl;
	cout << (a == b)<< endl;
	cout << (a != b)<< endl;
	system("cls");

	//&&, || , !
	cout << (a == 5 && b == 5) << endl; // and operator 
	cout << (a == 5 || b == 5) << endl; // or operator
	cout << !(a == 5 || b == 5) << endl; // not operator
	system("cls");
	// Assignemnet operator 
	// =, +=, -=, *=, /=, %=
	int x = 5;
	x += 7;
	//x = x + 7;
	cout << x << endl;
	system("pause>0");
}


