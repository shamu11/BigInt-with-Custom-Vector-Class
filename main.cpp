/*****************************************************************
* Defines main function containing some BigInt tests
*****************************************************************/
#include <iostream>
#include <stddef.h>
#include <stdlib.h>
#include "BigInt.h"
#include "BigIntVector.h"

using namespace std;

int main(void) {

	// object with explicit constructor from long
	BigInt num1(12);

	cout << "num1 (12): " << num1 << endl;

	// object with implicit constructor from long
	BigInt num2 = 19;

	cout << "num2 (19): " << num2 << endl;

	// binary addition BigInt+BigInt
	BigInt num3 = num1 + num2;

	cout << "num3 (31): " << num3 << endl;

	BigInt numA = 1200;

	cout << "numA (1200): " << numA << endl;

	BigInt numB = 55;

	cout << "numB (55): " << numB << endl;
	
	BigInt numC = numA + numB;

	cout << "numC (1255): " << numC << endl;

	// binary addition BigInt+long
	BigInt num4 = num3 + 2;

	// unary +
	BigInt num5 = +num2;

	// prefix increment
	BigInt num6 = ++num1;

	// postfix increment
	BigInt num7 = num3++;

	// direct initialization
	BigInt num8 = num3;

	// increment
	num3++;

	// print the values
	cout << "Num Values: " << num1 << " " << num2 << " " << num3 << " " <<
		num4 << " " << num5 << " " << num6 << " " <<
		num7 << " " << num8 << "\n" << endl;

	// compound assignment addition with BigInt
	num4 += num5;

	// compund assignment addition with long
	num5 += 34;

	// assignment with long
	num8 = 23;

	// binary addition: long + BigInt
	num3 = 28 + num8;

	// perform some equality tests
	bool bool1 = num7 == num8; // BigInt == BigInt
	bool bool2 = num6 == num1; // BigInt == BigInt
	bool bool3 = num1 == 4; // BigInt == long
	bool bool4 = num2 == 60; // BigInt == long
	bool bool5 = 4 == num1; // long == BigInt
	bool bool6 = 60 == num2; // long == BigInt

							 // print the values
	cout << "Bool Values: " << bool1 << " " << bool2 << " " << bool3 << " " <<
		bool4 << " " << bool5 << " " << bool6 << " " << "\n" << endl;

	cout << "Num Values: " << num1 << " " << num2 << " " << num3 << " " <<
		num4 << " " << num5 << " " << num6 << " " <<
		num7 << " " << num8 << "\n" << endl;

	// loop that computes a very large value
	//
	// with the dummied-up varsion, it overflows; in the completed
	// implementation, it should actually compute the correct value
	BigInt bigVal = 1234;
	cout << "Big Val: " << bigVal << "\n" << endl;
	//for (BigInt i = 0; !(i == 35); i++) {
	//	bigVal += bigVal;
	//	bigVal += bigVal;
	//	bigVal += 1;
	//	cout << "New Big Val: " << bigVal << endl;
	//}

	return EXIT_SUCCESS;
}