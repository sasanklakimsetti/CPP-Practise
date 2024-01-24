/*
You are developing a recipe management system that deals with fractional quantities of ingredients. To implement this functionality, you decide to create a Fraction class to handle fractional calculations. The Fraction class has private attributes numerator and a denominator to represent a fraction.



You need to implement a friend function addMixedFraction(const Fraction&, const Fraction&) that takes two Fraction objects as parameters. One of the fractions may be a mixed fraction, where the numerator is greater than the denominator. The function should add the fractions together and return the result as a new Fraction object.



Write a C++ program that allows users to input the numerators and denominators of two fractions. Create objects of the Fraction class using the input values. Then, use the addMixedFraction function to add the mixed fractions and display the result.



Note: This is a sample question asked in Capgemini recruitment.

Input: 4 7
8 7

Output:
12/7
*/

#include<iostream>
using namespace std;
class Fraction
{
private:
int numerator;
int denominator;

public:
Fraction(int num, int den)
{
this->numerator = num;
this->denominator = den;
}
friend void addMixedFraction(const Fraction& fact1, const Fraction& fact2);
};

void addMixedFraction(const Fraction& fact1, const Fraction& fact2)
{
int n1,n2,d1,d2;
n1 = fact1.numerator;
n2 = fact2.numerator;
d1 = fact1.denominator;
d2 = fact2.denominator;

Fraction result = Fraction(0,0);
if(d1 == d2)
{
result.numerator = n1+n2;
result.denominator = d1;
}
else
{
result.numerator = (n1*d2 + n2*d1);
result.denominator = (d1*d2);
}
cout<<result.numerator<<"/"<<result.denominator<<endl;
// return result;
}

int main()
{
int n1,n2,d1,d2;
cin>>n1>>d1>>n2>>d2;
Fraction fact1 = Fraction(n1,d1);
Fraction fact2 = Fraction(n2,d2);
addMixedFraction(fact1,fact2);

// cout<<result.numerator<<"/"<<result.denominator<<endl;
return 0;
}
