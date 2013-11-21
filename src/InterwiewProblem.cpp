//============================================================================
// Name        : InterwiewProblem.cpp
// Author      : Roman Ripp
// Version     :
// Copyright   : BSD
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TestCases.h"
using namespace std;


int main() {
	cout << "Find the indexes of A[x] + A[y] = Z" << endl; // prints Find the indexes of A[x] + A[y] = Z
	//Testing the algorithms:
	TestCases::randomArrayTest();
	TestCases::emptyArrayTest();
	TestCases::largeArrayTest();

	return 0;
}
