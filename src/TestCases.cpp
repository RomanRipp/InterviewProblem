/*
 * TestCases.cpp
 *
 *  Created on: Nov 20, 2013
 *      Author: romanripp
 */

#include "TestCases.h"

TestCases::TestCases() {
	// TODO Auto-generated constructor stub

}

TestCases::~TestCases() {
	// TODO Auto-generated destructor stub
}

void TestCases::randomArrayTest(){
	std::cout<<"Testing the algorithm with array of random size:"<<std::endl;
	int Z = rand() % 21;
	int size = rand() % 1001;
	int A[size];
	std::cout<<"Test array: ";
	for (int i = 0; i<size; i++){
		A[i] = rand() % 21;
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
	FindInArray find(A, size, Z);
	printResult(find);
}

void TestCases::emptyArrayTest(){
	std::cout<<"Testing the algorithm with array zero:"<<std::endl;
	int Z = rand() % 21;
	int size = 0;
	int A[] = {};
	std::cout<<"Test array: ";
	std::cout<<std::endl;
	FindInArray find(A, size, Z);
	printResult(find);
}

void TestCases::largeArrayTest(){
	std::cout<<"Testing the algorithm with array of a large size:"<<std::endl;
	int Z = rand() % 21;
	int size = (int)(65535 / sizeof(int));
	int A[size];
	std::cout<<"Test array: ";
	for (int i = 0; i<size; i++){
		A[i] = rand() % 21;
		if (i < 100){
			std::cout<<A[i]<<" ";
		}
	}
	std::cout<<"I am not gonna print out "<<size<<" value array ;)";
	std::cout<<std::endl;
	FindInArray find(A, size, Z);
	printResult(find);
}


void TestCases::printResult(FindInArray f){

	if (f.sumTo()){
		std::cout<<" No HashMap approach: A["<<f.getX()<<"] + A["<<f.getY()<<"] = "<<f.getZ()<<std::endl;
	}else{
		std::cout<<" No values such that A[x] + A[y] = Z can be found "<<std::endl;
	}

	if (f.mapSumTo()){
		std::cout<<" HashMap approach: A["<<f.getX()<<"] + A["<<f.getY()<<"] = "<<f.getZ()<<std::endl;
	}else{
		std::cout<<" No values such that A[x] + A[y] = Z can be found "<<std::endl;
	}
}

