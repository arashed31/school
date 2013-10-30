/*
	Ahmad Rashed
	CSCE 2110.002
	Program 4 - Floyd's Graphing Algorithm
	Matrix.h
*/

#include "Matrix.h"

Matrix::Matrix(int n)
{
	size = n;

	// Dynamically Creating a 2D Array
	graph = new int* [size];
	for(int i = 0; i < size; i++)
	{
		graph[i] = new int [size];;
	}
	// Matrix created. Time to fill. 
	scanData();
}

// Just a normal function to fill a 2D array.
void Matrix::scanData()
{
	int i, j, in;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			cin >> in;
			if (in == -1)
				in = 999;
			graph[i][j] = in;

			// Using -1 to denote "infinity" would have made the Floyd Algorithm
			// too complicated. I elected to use 999 in place of -1 for simplicity.
		}
	}
}

void Matrix::runFloyd()
{
	// k is the pivot point
	int i,j,k;
	// Three Dimensional Array does its magic to run Floyd's Algorithm. 
	for(k = 0; k < size; k++)
	{
		for(i = 0; i < size; i++)
		{
			for(j = 0; j < size; j++)
			{
				if(i==j)
					graph[i][j] = 0;
				else
					graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
			}
		}
	}
	printMatrix();
}

void Matrix::printMatrix()
{
	int i, j;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			cout << graph[i][j];
			if(i < size)
				cout << " ";
		}
	}
	cout << endl;
}

