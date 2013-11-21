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
	/**
	 * Test the algorithm with an array of random size
	 */
	static void randomArrayTest();
	/**
	 * Test the algorithm with an empty array
	 */
	static void emptyArrayTest();
	/**
	 * Test the algorithm with an array of large size
	 */
	static void largeArrayTest();
	static void printResult(FindInArray f);
};

#endif /* TESTCASES_H_ */
