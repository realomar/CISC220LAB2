/*
 * CISC220-31L LAB 2
 * Debra Yarrington
 *
 * Created on: Sep 10th, 2018
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
int* arrayDupeRemover(int arr[], int length); // function for problem 17
int hanningWindow(int arr[], int length); // function for problem 18
int* arrayFilterHanning(int arr[], int length); //function for problem 19
void graphArrayPrint(int arr[], int length, int high, int low); //function for problem 20
int** twoDimensionalArray(int *a, int *b); //function for problem 21

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
	cout << "" <<endl;
	cout << "Problem 17 test case 1:" << endl;
	cout << "" << endl;
	int prop17tst1 [10] = {2,3,3,7,5,8,8,1,0,0}; //note that the array has 3 numbers that are duplicated, so we will pass in the length 7 in the arrayPrint function below (10-3 = 7)
	cout << "The original array is:"<<endl;
	cout << "" << endl;
	arrayPrint(prop17tst1,10);
	cout << "" << endl;
	cout << "The new modified array without duplicates:" << endl;
	cout << "" << endl;
	arrayPrint(arrayDupeRemover(prop17tst1,10), 7); //passed a length of 7 because there are 3 duplicates in an array of 10 ints.
	cout << "" << endl;
	cout << "" << endl;
	cout << "Problem 17 test case 2:" << endl;
	cout << "" << endl;
	int prop17tst2 [15] = {10,3,3,6,9,9,2,4,4,12,12,17,19,19,20}; //note that the array has 5 numbers that are duplicated, so we will pass in the length 10 in the arrayPrint function below (15-5 = 10)
	cout << "The original array is:"<<endl;
	cout << "" << endl;
	arrayPrint(prop17tst2,15);
	cout << "" << endl;
	cout << "The new modified array without duplicates:" << endl;
	cout << "" << endl;
	arrayPrint(arrayDupeRemover(prop17tst2,15), 10); //passed a length of 7 because there are 3 duplicates in an array of 10 ints.
	cout << "" << endl;
	cout << "" << endl;
	cout << "Problem 17 test case 3:" << endl;
	cout << "" << endl;
	int prop17tst3 [20] = {100,100,119,243,243,553,583,583,866,993,993,229,432,432,632,743,743,965,234,256}; //note that the array has 6 numbers that are duplicated, so we will pass in the length 14 in the arrayPrint function below (20-6 = 14)
	cout << "The original array is:"<<endl;
	cout << "" << endl;
	arrayPrint(prop17tst3,20);
	cout << "" << endl;
	cout << "The new modified array without duplicates:" << endl;
	cout << "" << endl;
	arrayPrint(arrayDupeRemover(prop17tst3,20), 14); //passed a length of 7 because there are 3 duplicates in an array of 10 ints.
	cout << "" << endl;
	cout << "" << endl;
	stars();
	stars();
	stars();
	cout << "Problem 18 test case 1:" << endl;
	cout << "" << endl;
	cout <<"The array is shown below: (it has a window size of 5)"<<endl;
	cout <<""<<endl;
	int prop18tst1 [5] = {3,8,2,5,1};//length of array is 5. So the multipliers will be 1,2,3,2,1 in the order of the elements in the array. Note that below we will multiply the average value by 9 (1+2+3+2+1) to get the weighted value (in the print statement).
	arrayPrint(prop18tst1,5);
	cout <<"" <<endl;
	cout << "The weighted average of the array given is: "<< hanningWindow(prop18tst1, 5) <<endl;
	cout << "" <<endl;
	cout << "The weighted value of the array given is: "<< hanningWindow(prop18tst1, 5)*9 <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "Problem 18 test case 2:" << endl;
	cout << "" << endl;
	cout <<"The array is shown below: (it has a window size of 7)"<<endl;
	cout <<""<<endl;
	int prop18tst2 [7] = {5,7,3,4,2,6,2};//length of array is 7. So the multipliers will be 1,2,3,4,3,2,1 in the order of the elements in the array. Note that below we will multiply the average value by 16 (1+2+3+4+3+2+1) to get the weighted value (in the print statement).
	arrayPrint(prop18tst2,7);
	cout <<"" <<endl;
	cout << "The weighted average of the array given is: "<< hanningWindow(prop18tst2, 7) <<endl;
	cout << "" <<endl;
	cout << "The weighted value of the array given is : "<< hanningWindow(prop18tst2, 7)*16 <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "Problem 18 test case 3:" << endl;
	cout << "" << endl;
	cout <<"The array is shown below: (it has a window size of 5)"<<endl;
	cout <<""<<endl;
	int prop18tst3 [3] = {4,6,8};//length of array is 3. So the multipliers will be 1,2,1 in the order of the elements in the array. Note that below we will multiply the average value by 4 (1+2+1) to get the weighted value (in the print statement).
	arrayPrint(prop18tst3,3);
	cout <<"" <<endl;
	cout << "The weighted average of the array given is: "<< hanningWindow(prop18tst3, 3) <<endl;
	cout << "" <<endl;
	cout << "The weighted value of the array given is: "<< hanningWindow(prop18tst3, 3)*4 <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	stars();
	stars();
	stars();
	cout << "" <<endl;
	cout << "Problem 19 test case 1:" <<endl;
	cout <<"" <<endl;
	int prop19tst1[9] = {3,8,2,5,1,4,6,0,2};
	cout<<"Original unfiltered array #1 is:" <<endl;
	cout<<"" <<endl;
	arrayPrint(prop19tst1,9);
	cout<<""<<endl;
	cout<<"Filtered array #1 is:" <<endl;
	cout<<""<<endl;
	arrayPrint(arrayFilterHanning(prop19tst1,9),9);
	cout <<""<<endl;
	cout <<""<<endl;
	cout << "Problem 19 test case 2:" <<endl;
	cout <<"" <<endl;
	int prop19tst2[11] = {4,5,7,2,3,5,8,3,6,3,5};
	cout<<"Original unfiltered array #2 is:" <<endl;
	cout<<"" <<endl;
	arrayPrint(prop19tst2,11);
	cout<<""<<endl;
	cout<<"Filtered array #2 is:" <<endl;
	cout<<""<<endl;
	arrayPrint(arrayFilterHanning(prop19tst2,11),11);
	cout <<""<<endl;
	cout <<""<<endl;
	cout << "Problem 19 test case 3:" <<endl;
	cout <<"" <<endl;
	int prop19tst3[7] = {4,7,2,3,6,5,6};
	cout<<"Original unfiltered array #3 is:" <<endl;
	cout<<"" <<endl;
	arrayPrint(prop19tst3,7);
	cout<<""<<endl;
	cout<<"Filtered array #3 is:" <<endl;
	cout<<""<<endl;
	arrayPrint(arrayFilterHanning(prop19tst3,7),7);
	cout <<""<<endl;
	cout <<""<<endl;
	stars();
	stars();
	stars();
	cout<< "Problem 20 test case 1"<<endl;
	int prob20HighTst1= rand() %5 + 5;
	int prob20LowTst1 = (rand()% (5))*(-1)-5;
	int prob20LengthTst1 = rand()%5 +30;
	int prob20ArrTst1[prob20LengthTst1];
	int prob20intTst1;
	for(int prob20intTst1 =0; prob20intTst1 < prob20LengthTst1; prob20intTst1++){
		prob20ArrTst1[prob20intTst1] = rand() % (prob20HighTst1-prob20LowTst1) - prob20HighTst1;
	}
	cout << "Randomly generated array (unfiltered) is:"<< endl;
	cout << "" <<endl;
	arrayPrint(prob20ArrTst1, prob20LengthTst1);
	cout << "" << endl;
	cout <<"Graph of this randomly generated unfiltered array:" <<endl;
	cout <<""<<endl;
	graphArrayPrint(prob20ArrTst1, prob20LengthTst1, prob20HighTst1, prob20LowTst1);
	cout <<""<<endl;
	cout<<"Randomly generated but filtered array using Hanning Window: " <<endl;
	cout << "" << endl;
	arrayPrint(arrayFilterHanning(prob20ArrTst1, prob20LengthTst1),prob20LengthTst1);
	cout << "" << endl;
	cout <<"Graph of this randomly generated filtered array using Hanning Window:" <<endl;
	cout <<""<<endl;
	graphArrayPrint(arrayFilterHanning(prob20ArrTst1, prob20LengthTst1), prob20LengthTst1, prob20HighTst1, prob20LowTst1);
	cout <<""<< endl;
	cout <<""<<endl;
	cout<< "Problem 20 test case 2"<<endl;
	int prob20HighTst2= rand() %5 + 7;
	int prob20LowTst2 = (rand()% (5))*(-1)-7;
	int prob20LengthTst2 = rand()%5 +40;
	int prob20ArrTst2[prob20LengthTst2];
	int prob20intTst2;
	for(int prob20intTst2 =0; prob20intTst2 < prob20LengthTst2; prob20intTst2++){
		prob20ArrTst2[prob20intTst2] = rand() % (prob20HighTst2-prob20LowTst2) - prob20HighTst2;
	}
	cout << "Randomly generated array (unfiltered) is:"<< endl;
	cout << "" <<endl;
	arrayPrint(prob20ArrTst2, prob20LengthTst2);
	cout << "" << endl;
	cout <<"Graph of this randomly generated unfiltered array:" <<endl;
	cout <<""<<endl;
	graphArrayPrint(prob20ArrTst2, prob20LengthTst2, prob20HighTst2, prob20LowTst2);
	cout <<""<<endl;
	cout<<"Randomly generated but filtered array using Hanning Window: " <<endl;
	cout << "" << endl;
	arrayPrint(arrayFilterHanning(prob20ArrTst2, prob20LengthTst2),prob20LengthTst2);
	cout << "" << endl;
	cout <<"Graph of this randomly generated filtered array using Hanning Window:" <<endl;
	cout <<""<<endl;
	graphArrayPrint(arrayFilterHanning(prob20ArrTst2, prob20LengthTst2), prob20LengthTst2, prob20HighTst2, prob20LowTst2);
	cout <<""<< endl;
	cout <<""<<endl;
	cout<< "Problem 20 test case 3"<<endl;
	int prob20HighTst3= rand() %5 + 9;
	int prob20LowTst3 = (rand()% (5))*(-1)-9;
	int prob20LengthTst3 = rand()%5 +50;
	int prob20ArrTst3[prob20LengthTst3];
	int prob20intTst3;
	for(int prob20intTst3 =0; prob20intTst3 < prob20LengthTst3; prob20intTst3++){
		prob20ArrTst3[prob20intTst3] = rand() % (prob20HighTst3-prob20LowTst3) - prob20HighTst3;
	}
	cout << "Randomly generated array (unfiltered) is:"<< endl;
	cout << "" <<endl;
	arrayPrint(prob20ArrTst3, prob20LengthTst3);
	cout << "" << endl;
	cout <<"Graph of this randomly generated unfiltered array:" <<endl;
	cout <<""<<endl;
	graphArrayPrint(prob20ArrTst3, prob20LengthTst3, prob20HighTst3, prob20LowTst3);
	cout <<""<<endl;
	cout<<"Randomly generated but filtered array using Hanning Window: " <<endl;
	cout << "" << endl;
	arrayPrint(arrayFilterHanning(prob20ArrTst3, prob20LengthTst3),prob20LengthTst3);
	cout << "" << endl;
	cout <<"Graph of this randomly generated filtered array using Hanning Window:" <<endl;
	cout <<""<<endl;
	graphArrayPrint(arrayFilterHanning(prob20ArrTst3, prob20LengthTst3), prob20LengthTst3, prob20HighTst3, prob20LowTst3);
	cout <<""<< endl;
	cout <<""<<endl;
	stars();
	stars();
	stars();
	cout <<"Problem 21 test case 1"<<endl;
	cout <<""<<endl;
	int prob21intTst1;
	int prob21xTst1;
	int prob21yTst1;
	/*int** prob21arrayTst1 = twoDimensionalArray(&prob21xTst1 &prob21yTst1);
	for(prob21intTst1 = 0; prob21intTst1 < prob21xTst1; prob21intTst1++){
		arrayPrint(prob21arrayTst1[prob21intTst1], prob21yTst1);
	}*/
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

int* arrayDupeRemover(int arr[], int length){ //Problem 17, takes an array filled with integer and length, removes consecutive duplicates. Returns the new array
	int newLength = length;
	for(int i = 0; i < length-1 ; i++){
			if (i =length){
				if(arr[i] == arr[i+1]){
					newLength--;
				}
			}
			else if(arr[i] == arr[i+1]){
				newLength--;
			}
	}
	int *returnArray = new int[newLength]; //creating an array on the heap
	int currentIndex = 0;
	for(int i = 0; i < length; i++){
		if(arr[i] == arr[i+1]){}
		else{
			returnArray[currentIndex] = arr[i];
			currentIndex++;
		}
	}
	return returnArray;
}


int hanningWindow(int arr[], int length){ // function 18, returns the weighted average of a parameter window of ints.
	int multiplier = 1;
	int divisor = 0;
	int sum = 0;
	if(length <= 0) return 0;
	for(int i = 0; i < length; i++){
		sum += multiplier * arr[i];
		divisor += multiplier;
		if(i+1 <= ceil(length/2)){
			multiplier++;
		}
		else
			multiplier--;
	}

	return sum / divisor;
}

int* arrayFilterHanning(int arr[], int length){//function 19, takes an array of integers and its length as input parameters, returns the filtered array using the hanningWindow function above.
	int *filteredArray = new int[length]; //we are creating a new array to be stored in the array. We can't write over the old array, because if we pass in the array in the function, a new copy of the array is made, and after we go out of the function all the changes that we made to the array will be lost. So we have to create a new array on the heap and go from there.
	int i;
	for(i=0 ; i<length ; i++){
		if(i == 0 || i == 1 || i == length-2 || i == length-1 ){ //we are assuming that the window size is 5
			filteredArray[i] = 0;
		}
		else{
			filteredArray[i] = hanningWindow(&arr[i-2],5);//we are passing in &arr[i-2] because e want the weighted average to be the new value of the filter in the middle and since we have a window size of 5 and since we have a hanning window function that starts from the start of the array passed into it, we need to subtract 2 from the position. This is such that the value we are replacing is i the middle of the passed array.
		}
	}
	return filteredArray;
}

void graphArrayPrint(int arr[], int length, int high, int low){//Problem 20,uses nested for loops to draw the graph, takes 4 input parameters, one is the array, the second is its length, the third is the high value in the array (or the one that the array was generated by), and the last one is the low value of the array (or the one that the array was generated by). It returns nothing, but it prints out a graph of the array. This will be used to print out the graph of the filtired and unfiltered array.
	int i;
	int j;
	int index;
	for(i = high; i >= low; i--){
		for(j = 0; j <=length+2; j++){
			if (j ==0){
				if (i>=0){
					cout<<" "<<i<<":";
					j +=2;
				}
				else if(i<0){
					cout<<i<<":";
					j +=2;
				}
			}
			else{
				for(index = 0; index <length; index++){
					if(index == length -1){
						if(arr[index] == i){
							cout << "*"<<endl;
						}
						else{
							cout << " "<<endl;
						}
					}
					else if(arr[index] == i){
						cout << "*";
					}
					else{
						cout <<" ";
					}
				}
				break;
			}
		}
	}
}

int** twoDimensionalArray(int *a, int *b){
	int x = rand()%5 +5;
	int y = rand()%4+4;
	x = *a;
	y = *b;
	int **arrayAddresses = new int*[y];
	for(int i =0; i < y; i++){
		arrayAddresses[i] = new int[x];
	}
	std::fill(arrayAddresses[0], arrayAddresses[0] + x * y, 0); //fill the arrays with 0's.
	int i;
	int xRand;
	int yRand;
	for(i = 0; i <5; i++){
		xRand = rand() %x;
		yRand = rand() %y;
		if (arrayAddresses[xRand][yRand] == 1){
			i= -1;
			break;
		}
		else{
			arrayAddresses[xRand][yRand] == 1; //statement has no effect? Check what it means
		}
	}
	return arrayAddresses;
	//Make sure that there isn’t already a 1 in that location (and if there is generate a new x and y random number set). I didn't put that in yet.
	//continue from here
}
//end of lab 2

