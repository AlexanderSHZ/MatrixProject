#pragma once
#include <iostream>

#include <iomanip>
using namespace std;

#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable : 4996)

struct Array1D GetRowsColumn(struct Array1D ArrayElements);
struct Array2D GetRowsColumn(struct Array2D ArrayElements);

struct Array1D createArray(struct Array1D ArrayElements);
struct Array2D createArray(struct Array2D ArrayElements);

struct Array1D fillArray(struct Array1D ArrayElements);
struct Array2D fillArray(struct Array2D ArrayElements);

int freeMemory(struct Array1D ArrayElements);
int freeMemory(struct Array2D ArrayElements);

int print(struct Array1D ArrayElements);
int print(struct Array2D ArrayElements);

struct Array1D sortArrayMainDiag(struct Array1D ArrayElements);
struct Array2D sortArrayMainDiag(struct Array2D ArrayElements);

struct Array1D sortArraySideDiag(struct Array1D ArrayElements);
struct Array2D sortArraySideDiag(struct Array2D ArrayElements);

void sortArrayDiagType();
void diagTypeVariant();

void Logotype();
int MatrixType();  
int get_variant(int count);


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