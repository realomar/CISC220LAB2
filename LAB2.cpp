/*
 * CISC220 LAB 1
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
using namespace std;

void addressDemo();   // function 1
void plusFour(int x); // function 2


int main(){
	cout << "Value and address of a variable: ";
	addressDemo();
	cout << "Call by value demo. Making variable value 10, then passing to a function that adds 4." << endl;
	int x = 10;
	cout << "Original variable value and address: ";
	cout << x << ", " << &x << endl;
	cout << "Return variable from plusFour function: ";
	plusFour(x);
	return 0; // ends main function
}

void addressDemo(){
	// prints the value and the address of an int.
	int i = 1;
	cout << i << ", " << &i << endl;
}

void plusFour(int x){
	// prints the value and the address of parameter int, plus 4.
	x += 4;
	cout << x << ", " << &x << endl;
}
