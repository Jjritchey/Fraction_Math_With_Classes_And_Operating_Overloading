#define FRACTION_H
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Fraction
{
private:
	int num;
	int denom;


public:

	//constructors
	Fraction();                           //default constructor
	Fraction(int);                        //constructor with only numerator entered
	Fraction(double);                     //consturctor when a number with a decimal
	Fraction(int, int);                   //constructor with both num and demon entered


	//functions
	Fraction addFrac(Fraction);           //add fractions that returns a new variable
	Fraction subFrac(Fraction);           //subtract fractions that returns a new variable
	Fraction multFrac(Fraction);          //Multiply fractions that returns a new variable
	Fraction divFrac(Fraction);           //Divide fractions that returns a new variable

	void addFrac(Fraction, Fraction);     //add fractions that updates a current value
	void subFrac(Fraction, Fraction);     //Subtract fractions that updates a current value
	void multFrac(Fraction, Fraction);    //Mulitply fractions that updates a current value
	void divFrac(Fraction, Fraction);     //Divide fractions that updates a current value

	int gcd(int, int);                    //function to find the gcd of two numbers

	Fraction input(ofstream&);            //function to gather num and denom from user

	const void print(ofstream&);          //function to print out to answer to console and file

	// operator functions for MP3
	Fraction operator+(const Fraction &rhs);     //fucntion to add two fractions and return a new fraction
	Fraction operator-(const Fraction &rhs);     //fucntion to subtract two fractions and return a new fraction
	Fraction operator/(const Fraction &rhs);     //fucntion to add divide fractions and return a new fraction
	Fraction operator*(const Fraction &rhs);     //fucntion to add multiply fractions and return a new fraction
	Fraction operator=(const Fraction &rhs);     //fucntion to add set a fraction equal to anohter and return a new fraction
	Fraction operator+=(const Fraction& rhs);    //fucntion to add two fractions and update current variable
	Fraction operator-=(const Fraction& rhs);    //fucntion to add subtract fractions and update current variable
	Fraction operator*=(const Fraction& rhs);    //fucntion to add multiply fractions and update current variable
	Fraction operator/=(const Fraction& rhs);    //fucntion to add divide fractions and update current variable

	Fraction &operator-();                        //changing a number to a negative
	Fraction &operator~();                        //chnaging num and denom
	Fraction &operator++();                       //++x adding 1/1 first (before any other op on the variable)
	Fraction &operator--();                       //--x subtracting 1/1 first (before any other op on the variable)

	Fraction operator++(int);                     //x++ adding 1/1 after any operation
	Fraction operator--(int);                     //x-- subtracting 1/1 after any operation

	// << and >> operators
	friend std::ostream& operator<<(std::ostream& out, Fraction const& r);      //cout operation
	friend istream& operator>>(istream& out, Fraction& r);                      //cin operation


	//compare fucntions
	bool operator>(const Fraction& rhs) const;                //greater than function
	bool operator<(const Fraction& rhs) const;                //less than function
	bool operator ==(const Fraction& rhs) const;              //are they equal function

	bool operator>=(const Fraction& rhs) const;               //greater than or equal to function
	bool operator<=(const Fraction& rhs) const;               //less than or equal to function
	bool operator !=(const Fraction& rhs) const;              //not equal to fucntion
	bool operator !();                                        //not function

	//Casting functions
	operator double() const;                                  //convert to double function
	operator float() const;                                   //convert to float function
};
