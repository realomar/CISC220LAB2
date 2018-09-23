/*
 * CISC220-31L LAB 2
 * Debra Yarrington
 *
 * Created on: Sep 7th, 2018
 *
 * TA: Moumita Bhattacharya
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
void changeValuePointer(int *x, int *y); // function for problem 6
void changeCharacters(string &a, string b, string *c); // function for problem 7
bool swapNumbers8a (int &a, int &b); // function for problem 8a
void loop20times8b(); //function for problem 8b
void arrayRandomPrint(int length, int &x); //function for problem 8
void arrayRandomPrintReverse(int length); //function for problem 9
void arrayRandSelect(int length, int range); //function for problem 10
int* createVariableStack(); //function for problem 11
void arrayPrint(int b[], int length); //function for problem 12
int* arrayLengthHighLowGenerator(int *length, int *high, int *low); //function for problem 13
int* arrayOnStack(int length); //function for problem 14
void arrayIntAddress(int arr[], int length); //function for problem 15
void arrayDoubleAddress(double arr[], int length); //function for problem 16

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
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 8a" << endl;
	cout << "" << endl;
	int largeNumber = 20;
	int smallNumber = 5;
	cout << "The large number is: " << largeNumber << endl;
	cout << "The small number is: " << smallNumber << endl;
	swapNumbers8a(largeNumber, smallNumber);
	cout << "The numbers were swapped, The smallNumber variable now has the value: " << smallNumber << ". The largeNumber variable now has the value: " << largeNumber << endl;
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 8b" << endl;
	cout << "" << endl;
	loop20times8b();
	cout << "" << endl;
	stars();
	cout << "" << endl;
	cout << "Problem 8 test case 1:" << endl;
	cout << "" << endl;
	int smallestNumber = -1;
	arrayRandomPrint(10, smallestNumber); //length of array is 10 for the first test case
	cout << "" << endl;
	cout << "The variable smallestNumber now is " << smallestNumber << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Problem 8 test case 2:" << endl;
	smallestNumber = -1;
	cout << "" << endl;
	arrayRandomPrint(30, smallestNumber); //length of array is 30 for the second test case
	cout << "" << endl;
	cout << "The variable smallestNumber now is " << smallestNumber << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Problem 8 test case 3:" << endl;
	smallestNumber = -1;
	cout << "" << endl;
	arrayRandomPrint(50, smallestNumber); //length of array is 50 for the third test case
	cout << "" << endl;
	cout << "The variable smallestNumber now is " << smallestNumber << endl;
	cout << "" << endl;
	stars();
	cout << "Problem 9 test case 1:" <<endl;
	cout << "" << endl;
	arrayRandomPrintReverse(5); //array of length 5
	cout << "" << endl;
	cout << "" << endl;
	cout << "Problem 9 test case 2:" <<endl;
	cout << "" << endl;
	arrayRandomPrintReverse(10); //array of length 10
	cout << "" << endl;
	cout << "" << endl;
	cout << "Problem 9 test case 3:" <<endl;
	cout << "" << endl;
	arrayRandomPrintReverse(15); //array of length 15
	cout << "" << endl;
	cout << "" << endl;
	stars();
	cout<< "Problem 10 first test case:" << endl;
	cout << "" <<endl;
	arrayRandSelect(10, 21); //array of length 10 with range of values from 0 to 20 (including 20).
	cout << "" <<endl;
	cout << "" <<endl;
	cout<< "Problem 10 second test case:" << endl;
	cout << "" <<endl;
	arrayRandSelect(20, 41); //array of length 20 with range of values from 0 to 40 (including 40).
	cout << "" <<endl;
	cout << "" <<endl;
	cout<< "Problem 10 third test case:" << endl;
	cout << "" <<endl;
	arrayRandSelect(30, 51); //array of length 30 with range of values from 0 to 50 (including 50).
	cout << "" <<endl;
	cout << "" <<endl;
	stars();
	cout<<"Problem 11:"<< endl;
	int* stackVariable = createVariableStack();
	//cout<< "address of the variable in stack is: " << stackVariable<< endl; //will print out 0. So it won't work. That is because after you leave the scope of a function everything decalred in the function will become garbage. So the value doesn't exist in that memory address now and so the address is 0 (doesn't exist) and if you try to get the value the program won't compile because the value doesn't exist anymore.
	//cout<< "value of the variable in stack is: " << **stackVariable<< endl;
	cout << "Getting the address of the variable using a reference will print out 0. So it won't work. That is because after you leave the scope of a function everything decalred in the function will become garbage. So the value doesn't exist in that memory address now and so the address is 0 (doesn't exist) and if you try to get the value the program won't compile because the value doesn't exist anymore." << endl;
	cout << "" <<endl;
	stars();
	cout<< "" <<endl;
	cout<< "Problem 12 and 12b test case 1:" <<endl; //Test case 1 for problems 12 and 12b, array of length 10
	cout<< "" <<endl;
	cout <<"Test array will be printed: " << endl;
	cout << "" <<endl;
	int lengthTstArr1 =10;
	int tstArr1[lengthTstArr1];
	for(int v = 0; v < lengthTstArr1; v++){
		tstArr1[v] = rand() %10 + 1;
	}
	arrayPrint(tstArr1,lengthTstArr1);
	cout << "" << endl;
	stars();
	cout <<"" << endl;
	cout<< "Problem 12 and 12b test case 2:" <<endl; //Test case 2 for problems 12 and 12b, array of length 25
	cout<< "" <<endl;
	cout <<"Test array will be printed: " << endl;
	cout << "" <<endl;
	int lengthTstArr2 =25;
	int tstArr2[lengthTstArr2];
	for(int v = 0; v < lengthTstArr2; v++){
		tstArr2[v] = rand() %10 + 1;
	}
	arrayPrint(tstArr2,lengthTstArr2);
	cout << "" << endl;
	stars();
	cout <<"" << endl;
	cout<< "Problem 12 and 12b test case 2:" <<endl; //Test case 2 for problems 12 and 12b, array of length 40
	cout<< "" <<endl;
	cout <<"Test array will be printed: " << endl;
	cout << "" <<endl;
	int lengthTstArr3 =40;
	int tstArr3[lengthTstArr3];
	for(int v = 0; v < lengthTstArr3; v++){
		tstArr3[v] = rand() %10 + 1;
	}
	arrayPrint(tstArr3,lengthTstArr3);
	cout << "" << endl;
	stars();
	cout <<"" << endl;
	stars();
	cout << "" <<endl;
	cout <<"Problem 13 :" <<endl;
	cout << "" <<endl;
	int lengthNewArray;
	int highNewArray;
	int lowNewArray;
	int *newArray = arrayLengthHighLowGenerator(&lengthNewArray, &highNewArray, &lowNewArray);
	cout<< "The new modified length for the array is: " << lengthNewArray <<endl;
	cout << "" << endl;
	cout<< "The new modified high value (not included) for the array is: " << lengthNewArray <<endl;
	cout << "" << endl;
	cout<< "The new modified low value for the array is: " << lengthNewArray <<endl;
	cout << "" << endl;
	cout <<"Randomly generate array on the heap:"<<endl;
	cout << "" << endl;
	arrayPrint(newArray, lengthNewArray);
	cout << "" <<endl;
	stars();
	cout <<"Problem 14 :" <<endl;
	cout << "" <<endl;
	int lengthArrayStack = 25;
	int *stackArray = arrayOnStack(lengthArrayStack);
	// arrayPrint(stackArray, lengthArrayStack);
	// Won't work. The array was on stack, and after we leave the function where the array was created on stack on, that array disappears as it is removed from stack. So when we try to point to the address of the first value of the array, we can'r find it since it does not exist anymore. It has been removed from the stack so no way for us to find it. So to avoid that we create the array on the heap.
	cout << "Trying to print out the array won't work. The array was on stack, and after we leave the function where the array was created on stack on, that array disappears as it is removed from stack. So when we try to point to the address of the first value of the array, we can'r find it since it does not exist anymore. It has been removed from the stack so no way for us to find it. So to avoid that we create the array on the heap." <<endl;
	cout << "" <<endl;
	stars();
	stars();
	stars();
	cout <<"Problem 15 test case 1:" <<endl;
	cout << "" <<endl;
	int lengthIntArray1 = 10;
	int intArray1[lengthIntArray1];
	for(int e = 0;e < lengthIntArray1; e++){
		intArray1[e] = rand() % 20;
	}
	arrayIntAddress(intArray1, lengthIntArray1);
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout <<"Problem 15 test case 2:" <<endl;
	cout << "" <<endl;
	int lengthIntArray2 = 25;
	int intArray2[lengthIntArray2];
	for(int e = 0;e < lengthIntArray2; e++){
		intArray2[e] = rand() % 50;
	}
	arrayIntAddress(intArray2, lengthIntArray2);
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout <<"Problem 15 test case 3:" <<endl;
	cout << "" <<endl;
	int lengthIntArray3 = 50;
	int intArray3[lengthIntArray3];
	for(int e = 0;e < lengthIntArray3; e++){
		intArray3[e] = rand() % 100;
	}
	arrayIntAddress(intArray3, lengthIntArray3);
	cout << "" <<endl;
	cout << "" <<endl;
	stars();
	stars();
	stars();
	cout << "" <<endl;
	cout << "" <<endl;
	cout <<"Problem 16 test case 1:" <<endl;
	cout << "" <<endl;
	cout <<""<<endl;
	int lengthDoubleArray1 = 10;
	double doubleArray1[lengthDoubleArray1];
	for(int e = 0;e < lengthDoubleArray1; e++){
		doubleArray1[e] = (double)rand()/RAND_MAX * 20;
	}
	arrayDoubleAddress(doubleArray1, lengthDoubleArray1);
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout <<"Problem 16 test case 2:" <<endl;
	cout << "" <<endl;
	int lengthDoubleArray2 = 25;
	double doubleArray2[lengthDoubleArray2];
	for(int e = 0;e < lengthDoubleArray2; e++){
		doubleArray2[e] = (double)rand()/RAND_MAX * 50;
	}
	arrayDoubleAddress(doubleArray2, lengthDoubleArray2);
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout <<"Problem 16 test case 3:" <<endl;
	cout << "" <<endl;
	int lengthDoubleArray3 = 50;
	double doubleArray3[lengthDoubleArray3];
	for(int e = 0;e < lengthDoubleArray3; e++){
		doubleArray3[e] = (double)rand()/RAND_MAX * 100;
	}
	arrayDoubleAddress(doubleArray3, lengthDoubleArray3);
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	stars();
	stars();
	stars();
	//continue from here

	return 0; // ends main function
}

int stars(){ //prints out a line of stars to differentiate between different questions
	cout << "******************************************************************************************************" << endl; // prints stars
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

bool swapNumbers8a (int &a, int &b){ //Problem 8a, takes two input parameters and uses call by reference. Swaps both numbers if the number in the first parameter is bigger than the one in the second and returns true. Otherwise nothing is swapped and false is returned.
	int a1 = a;
	int b1 = b;
	if (a > b){
		a = b1;
		b = a1;
		return true;
	}
	else{
		return false;
	}
}

void loop20times8b(){ //Problem 8b, takes no parameters, returns nothing,
	int i;
	for (i = 0; i < 20; i++){
		int x = rand() % 26;
		int y = rand() % 26;
		cout<< "The 2 numbers are: " << x << ", " << y << endl;
		if(swapNumbers8a (x,y) == true){
			cout << "Swapped the 2 numbers: " << x << ", " << y << endl;
		}
	}
}

void arrayRandomPrint(int length, int &x){ //Problem 8, takes 2 input parameters, one is the length, one represents the smallest number in the array and is called by reference. Returns nothing
	int arr[length];
	int y;
	for (int i = 0 ; i<length ; i++){
		y = rand() % 51;
		arr[i] = y;

		if(i ==0){
			x = y;
			cout << arr[i]<< ", ";
		}
		else{
			cout << arr[i] << ", ";
			if(y<x){
				x = y;
			}
		}
	}
	cout << endl;
	cout<< "The smallest value in the array is " << x << endl;
}

void arrayRandomPrintReverse(int length){ //Problem 9, returns nothing, takes one integer input parameter that represents the length of the array.
	int arr[length];
	int y;
	int start = 0;
	int end = length-1;
	cout << "The original array: " <<endl;
	cout << endl;
	for (int i = 0 ; i<length ; i++){
		arr[i] = rand() % 51;
		cout << arr[i]<< ", ";
	}
	cout << "" << endl;
	cout <<"The reversed array: " <<endl;
	cout << "" << endl;
	while(start < end){
		y = arr[start];
		arr[start] = arr[end];
		arr[end] = y;
		cout << arr[start]<< ", ";
		start++;
		end--;
	}
	for(start; start<length ; start++){
		cout << arr[start]<< ", ";
	}
}

void arrayRandSelect(int length, int range){ //Problem 10, takes 2 integer parameters, one for the length of the array, one for the range of the randomly generate values. Returns nothing.
	int arr[length];
	cout << "Original array: " << endl;
	cout << "" << endl;
	for(int i = 0; i <length; i++){
		arr[i] = rand() % range;
		cout <<arr[i]<< ", ";
	}

	int y;
	int i;
	cout <<""<<endl;
	cout << "" <<endl;
	cout<<"The smallest values in the array, as we traverse through the array:" <<endl;
	cout << "" << endl;
	for (i = 0 ; i<length ; i++){
		if(i == 0){
			y = arr[i];
			cout << arr[i]<< ", ";
			arr[i] = range + 1;
		}
		else if (arr[i]<=y){
			cout << arr[i] << ", ";
			y = arr[i];
			arr[i] = range + 1;
		}
	}
	cout << "" <<endl;
	cout << "" <<endl;
	cout <<"Now printing out the list after modifying the smallest numbers in it:" << endl;
	cout << "" << endl;
	for(int i = 0; i <length; i++){
		cout <<arr[i]<< ", ";
	}
}

int* createVariableStack(){ //Problem 11, takes no input parameters and return an address of a variable declared in the function
	int x = 3;
	cout <<"The value of the variable is: " << x <<endl;
	cout <<"The address of the variable is: " << &x <<endl;
	return &x;
}

void arrayPrint(int b[], int length){ //Problem 12, takes two input parameters, an array of integers, and an integer indicating the length of the array in the first input.
	for(int i = 0; i <length; i++){
		if (i != length -1){
		cout<< b[i] << ", ";
		}
		else{
			cout<< b[i] <<endl;
		}
	}
}

int* arrayLengthHighLowGenerator(int *length, int *high, int *low){//Problem 13, takes 3 input parameters using call by pointer. 1st parameter is for lengh of array. Second parameter is for high values in the array. Third parameter is for low value in array. Function returns the generate array.
	*length = rand() %25 +25;
	*high = rand()%5 +5;
	*low = (rand()%5 )*(-1) -5;
	int *genArray = new int[*length];
	for(int i =0; i < *length; i++){
		genArray[i] = rand() % (*high-*low) - *high;
	}
	return genArray;
}

int* arrayOnStack(int length){ //Problem 14, takes one input parameter, the size of the array, and then generates and returns the array.
	length = rand() %25 +25;
	int high = rand()%5 +5;
	int low = (rand()%5 )*(-1) -5;
	int genArray[length];
	for(int i =0; i < length; i++){
		genArray[i] = rand() % (high-low) - high;
	}
	return genArray;
}

void arrayIntAddress(int arr[], int length){ //Problem 15, takes 2 input parameters, an array filled with integers and its size. Returns nothing.
	for(int i = 0; i <length ;i++){
		cout << "The address of value #" << i << " in the array is: " << &arr[i] <<". The value at that address is " << arr[i] <<endl;
	}
}

void arrayDoubleAddress(double arr[], int length){ //Problem 16, takes 2 input parameters, an array filled with doubles and its size. Returns nothing.
	for(int i = 0; i <length ;i++){
		cout << "The address of value #" << i << " in the array is: " << &arr[i] <<". The value at that address is " << arr[i] <<endl;
	}
}

//end of lab 2

