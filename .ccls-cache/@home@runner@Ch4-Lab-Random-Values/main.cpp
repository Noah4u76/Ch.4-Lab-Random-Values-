//
// File: main.cpp
// Description: Random Values
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Given main(), complete class RandomNumbers (in files RandomNumbers.h and RandomNumbers.cpp) that has three integer data members: var1, var2, and var3. Write a getter function for each variable: getVar1(), getVar2() and getVar3(). Then write the following 2 member functions:

SetRandomValues( ) - accepts a low and high integer values as parameters, and sets var1, var2, and var3 to random numbers (generated using the random function) within the range of the low and high input values (inclusive).
GetRandomValues( ) - prints out the 3 random numbers in the format: "Random values: var1 var2 var3"
Ex: If the input is:

15 20
the output is:

Random values: 17 15 19
where 17, 15, 19 can be any random numbers within 15 and 20 (inclusive).

Note: When submitted, your program will be tested against different input range to verify if the three randomly generated values are within range. */

#include <iostream>

#include "RandomNumbers.h"
using namespace std;

int main() {
	int low;
	int high;
	cin >> low;
	cin >> high;

	RandomNumbers rn = RandomNumbers();
	rn.SetRandomValues(low, high);
	rn.GetRandomValues();

	return 0;
}