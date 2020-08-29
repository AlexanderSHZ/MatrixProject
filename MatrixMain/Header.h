#pragma once
#include <iostream>

#include <iomanip>
using namespace std;

#pragma warning(disable : 4996)

struct Array1D createArray1D(struct Array1D ArrayElements);
struct Array2D createArray2D(struct Array2D ArrayElements);

struct Array1D fillArray1D(struct Array1D ArrayElements);
struct Array2D fillArray2D(struct Array2D ArrayElements);

int freeMemory1D(struct Array1D ArrayElements);
int freeMemory2D(struct Array2D ArrayElements);

int print1D(struct Array1D ArrayElements);
int print2D(struct Array2D ArrayElements);

struct Array1D
{
    int rows, column;
    int* arrayPtr = NULL;
};

struct Array2D
{
    int rows, column;
    int** arrayPtr = NULL;
};