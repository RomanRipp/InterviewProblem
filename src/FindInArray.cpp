/*
 * FindInArray.cpp
 *
 *  Created on: Nov 20, 2013
 *      Author: romanripp
 */

#include "FindInArray.h"

FindInArray::FindInArray(int Array[], int arraySize, int Z) {
	//Constructor
	x=0;
	y=0;
	z = Z;
	A = Array;
	size = arraySize;//sizeof(Array);//
}

FindInArray::~FindInArray() {
}

int FindInArray::getX(){
	return x;
}

int FindInArray::getY(){
	return y;
}

int FindInArray::getZ(){
	return z;
}

bool FindInArray::sumTo(){
	for (x = 0; x < size; x++){
		//Check if A[y] such that A[x]+A[y] = z exists given current x
		if (z - A[x] <= 10){
			for (y = x + 1; y < size; y++){
				//Check if the condition is satisfied
				if (A[x] + A[y] == z){
					return true;
				}
			}
		}
	}
	return false;
}

bool FindInArray::mapSumTo(){
	std::unordered_map<int, int> m;
	for (int i = 0; i < size; i++){
		//Check if value such that A[x]+A[y] = z is already in the map
		if (m.count(z - A[i])) {
			x = m[z - A[i]];
			y = i;
			return true;
		}else{
			//Add the current value as a map key
			m[A[i]] = i;
		}
	}
	return false;
}
