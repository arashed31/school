/*
	Ahmad Rashed
	CSCE 2110.002
	Program 4 - Floyd's Graphing Algorithm
	Matrix.h
*/

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Matrix
{
public:
	Matrix(int);
	void runFloyd();
private:
	void scanData();
	void printMatrix();
	int size;
	int **graph;
};