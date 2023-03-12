//
// File: RandomNumbers.cpp
// Description: Random Values
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include <iostream>

#include "RandomNumbers.h"
using namespace std;

void RandomNumbers::SetRandomValues(int low, int high) {
  int lowBound = low;
  int upBound = high;
  srand(time(0));
  var1 = rand() % (upBound - lowBound + 1) + lowBound;
  var2 = rand() % (upBound - lowBound + 1) + lowBound;
  var3 = rand() % (upBound - lowBound + 1) + lowBound;
}
int RandomNumbers::GetVar1(){
  return var1;
}
int RandomNumbers::GetVar2(){
  return var2;
}
int RandomNumbers::GetVar3(){
  return var3;
}

void RandomNumbers::GetRandomValues(){
  cout << "Random values: " << var1 << " " << var2 << " " << var3 << endl;
}