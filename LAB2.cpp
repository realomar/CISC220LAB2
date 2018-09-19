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
using namespace std;

int stars(); //stars function
void addressDemo();   // function 1
void plusFour(int x); // function 2
int randFifty();    // function 3
void addressCuber(int &a);  // function 4 [incomplete]



int main(){
	stars();
	cout << "Problem 1:"<< endl;
	cout << "Value and address of a variable: ";
	addressDemo();
	stars();
	cout <<"Problem 2:" <<endl;
	cout << "Call by value demo. Making variable value 10, then passing to a function that adds 4." << endl;
	int x = 10;
	cout << "Original variable value and address: ";
	cout << x << ", " << &x << endl;
	cout << "Return variable from plusFour function: ";
	plusFour(x);

	cout << "randFifty return value and address: ";
	x = randFifty();
	cout << "Local variable return value and address: " << x << ", " << &x << endl;
	stars();
	cout << "Probelm 4:" << endl;
	int f = 5;
	cout << "Value of integer: " << f << endl;
	cout << "Address of integer: " << &f << endl;
	addressCuber(*f);
	
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

void addressCuber(int *a){ // Problem 4, calls input int by pointer and cubes it.
	*a = pow(*a,3);
	cout << "Value at the address: " << a << endl;
	cout << "Address in the parameter: " << *a << endl;
	cout << "Address of the parameter: " << &a<< endl;
}

//end of lab 2

