/*
 * TestCases.h
 *
 *  Created on: Nov 20, 2013
 *      Author: romanripp
 */

#ifndef TESTCASES_H_
#define TESTCASES_H_

#include "FindInArray.h"
#include <iostream>

class TestCases {
public:
	TestCases();
	virtual ~TestCases();
	static void randomArrayTest();
	static void emptyArrayTest();
	static void largeArrayTest();
	static void printResult(FindInArray f);
};

#endif /* TESTCASES_H_ */
