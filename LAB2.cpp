/*
 * CISC220 LAB 2
 * Debra Yarrington
 *
 * Created on: Sep something, 2018
 *
 * Authors: omaromar@udel.edu Omar Ahmad
 *  		tamimoz@udel.edu  Ahmad Tamimi
 *
 * This file contains functions for lab 2. The functions aren't related
 * in any other way that they are required for lab 2.
 */
#include <iostream> //imports input/output
#include <stdlib.h> //includes std library
#include <cmath>
#include <string>
#include <time.h>
using namespace std;

int stars(); //stars function
void addressDemo();   // function for problem 1
void plusFour(int x); // function for problem 2
int randFifty();    // function for problem 3
void addressCuber(int *a);  // function for problem 4
void aliasPlus10(int &x); // function for problem 5
void changeValuePointer(int *x, int *y); //function for problem 6
void changeCharacters(string &a, string b, string *c); //function for problem 7



int main(){
	srand(time(NULL));
	stars();
	cout << "" << endl;
	cout << "Problem 1:"<< endl;
	cout << "" << endl;
	cout << "Value and address of a variable: ";
	addressDemo();
	cout << "" << endl;
	stars();
	cout <<"Problem 2:" <<endl;
	cout << "" << endl;
	cout << "Call by value demo. Making variable value 10, then passing to a function that adds 4." << endl;
	int x = 10;
	cout << "Original variable value and address: ";
	cout << x << ", " << &x << endl;
	cout << "Return variable from plusFour function: ";
	plusFour(x);
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 3:" << endl;
	cout << "" << endl;
	cout << "randFifty return value and address: ";
	x = randFifty();
	cout << "Local variable return value and address: " << x << ", " << &x << endl;
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 4:" << endl;
	int f = 5;
	cout << "Value of integer: " << f << endl;
	cout << "Address of integer: " << &f << endl;
	addressCuber(&f);
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout <<"Problem 5:" << endl;
	cout << "" << endl;
	int r = 7;
	cout << "The value of our number is " << r << endl;
	cout << "The address of our defined number is " << &r << endl;
	aliasPlus10(r);
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 6:" << endl;
	cout << "" << endl;
	int ten = 10;
	int twenty = 20;
	cout << "The first value is: " << ten << endl;
	cout << "The second value is : " << twenty << endl;
	changeValuePointer(&ten, &twenty);
	cout <<"After the function has been called, the first value changed to " << ten << endl;
	cout <<"After the function has been called, the second value changed to " << twenty << endl;
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 7" << endl;
	cout << "" << endl;
	string character1 = "r";
	string character2 = "a";
	string character3 = "h";
	string character4 = "i";
	string character5 = "c";
	string word1 = character5 + character3 + character2 + character4 + character1;
	cout << word1 << endl; //spells out chair
	changeCharacters(character4, character1, &character2);
	cout << character5 + character4 + character2 + character5 + character3 << endl; //spells out couch
	

	//continue from here

	return 0; // ends main function
}

int stars(){ //prints out a line of stars to differentiate between different questions
	cout << "***********************************" << endl; // prints stars
	return 0; //dummy return statement
}

void addressDemo(){ //Problem 1 prints the value and the address of an int.
	int i = 5;
	cout << i << ", " << &i << endl;
}

void plusFour(int x){ //Problem 2,takes one integer parameter, prints the value and the address of that int parameter, then it adds 4 to the value of the integer.This function uses the call by value function call.
	x += 4;
	cout << x << ", " << &x << endl;
}

int randFifty(){ // Problem 3, takes no parameters, returns a random int from 0 to 49, and prints its value and address.
	int j;
	j = rand() % 50;
	cout << j << ", " << &j << endl;
	return j;
}

void addressCuber(int *a){ // Problem 4, calls input int by pointer and cubes it. Function call is call by pointer.
	cout <<*a << endl;
	*a = (*a) * (*a) * (*a) ;
	cout << "Value at the address: " << *a << endl; //the orignal value in the address that a points to
	cout << "Address in the parameter: " << a << endl; //address of the original value that a points to
	cout << "Address of the parameter: " << &a<< endl; // the address of a itself
}

void aliasPlus10(int &x){ //Problem 5, uses call by reference to add a random number between 1 and 10 to the input parameter. This function returns nothing.
	int j = rand() % 11;
	x += j;
	cout << "The random number is " << j << endl;
	cout << "The new value is " << x << endl;
	cout << "The address of the input parameter is " << &x << endl;
}

void changeValuePointer(int *x, int *y){ //Problem 6, uses call by pointer, returns nothing, changes the value that the given addresses point to.
	int *c = x;
	*c = 32;
	c = y;
	*c =42;

}

void changeCharacters(string &a, string b, string *c){ //Problem 7, uses call be reference for the first input variable, call by value for the second one, and call by pointer for the third input parameter. Switches the values of characters around. returns nothing.
	a = "o";
	b = "p";
	*c = "u";
}


//end of lab 2

