/*
 * FindInArray.h
 *
 *  Created on: Nov 20, 2013
 *      Author: romanripp
 */

#ifndef FindInArray_H_
#define FindInArray_H_

#include <unordered_map>

class FindInArray {
private:
	int x;
	int y;
	int z;
	int* A;
	int size;
public:
	FindInArray(int Array[], int arraySize, int Z);
	virtual ~FindInArray();
	/**
	 * find the values in the array that sum up to z.
	 * The values in the array are from 0 to 10
	 */
	bool sumTo();
	/**
	 * find the values in the array that sum up to z using hash map
	 * The values in the array are from 0 to 10
	 */
	bool mapSumTo();
	/**
	 * return index of the first element
	 */
	int getX();
	/**
	 * return index of the second element
	 */
	int getY();
	/**
	 * returnn the sum of the elements:
	 */
	int getZ();

};

#endif /* FindInArray_H_ */
