//Justin Ritchey. MP3. 10/5/2020. Fraction_Math_Program: Meant to overload operators while using fractions. Will ask user to enter two fractions and what what want to do with those fractions. Also has ++ -- ~ - ! >> << used for the programmer.

#include "fraction.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <iomanip>
#include <fstream>
#include <ostream>

using namespace std;

void main()
{
	char quit = '\0';                                                        //char to hold the character for when the user wants to quit
	Fraction a(2, 3);                                                              //Fraction a that will be used across the program to hold the unused third fraction for the math functions
	Fraction x;                                                              //will hold the first fraction entered by the user
	Fraction y;                                                              //will hold the second fraction entered by the user
	
	a += 5.6;

	cout << a;
	
	
	system("PAUSE");
}