#include "Header.h"

struct Array1D sortArrayMainDiag(struct Array1D ArrayElements)
{
	int tmp = 0;

	for (int i = 0; i < ArrayElements.rows - 1; i++)
	{
		for (int j = 0; j < ArrayElements.column - 1; j++)
		{
			if (i = j && ArrayElements.arrayPtr[i * ArrayElements.column + j] < ArrayElements.arrayPtr[(i + 1) * ArrayElements.column + j + 1])
			{
				tmp = ArrayElements.arrayPtr[i * ArrayElements.column + j];
				ArrayElements.arrayPtr[i * ArrayElements.column + j] = ArrayElements.arrayPtr[(i + 1) * ArrayElements.column + j + 1];
				ArrayElements.arrayPtr[(i + 1) * ArrayElements.column + j + 1] = tmp;
			}			
		}
	}
	return ArrayElements;
}

struct Array2D sortArrayMainDiag(struct Array2D ArrayElements)
{
	int tmp = 0;
	
	for (int i = 0; i < (ArrayElements.rows - 1); i++)
	{
		for (int j = 0; j < (ArrayElements.column - 1); j++)
		{
			if (ArrayElements.arrayPtr[j][j] < ArrayElements.arrayPtr[j + 1][j + 1])
			{
				tmp = ArrayElements.arrayPtr[j][j];
				ArrayElements.arrayPtr[j][j] = ArrayElements.arrayPtr[j + 1][j + 1];
				ArrayElements.arrayPtr[j + 1][j + 1] = tmp;
			}
		}
	}
	return ArrayElements;
}

struct Array1D sortArraySideDiag(struct Array1D ArrayElements)
{


	return ArrayElements;
}

struct Array2D sortArraySideDiag(struct Array2D ArrayElements)
{
	int tmp;

	for (int i = 0; i < (ArrayElements.rows - 1); i++)
	{
		for (int j = i + 1; j < ArrayElements.column; j++)
		{
			if (ArrayElements.arrayPtr[j][ArrayElements.column -1 - j] < ArrayElements.arrayPtr[i][ArrayElements.column - 1 - i])
			{
				tmp = ArrayElements.arrayPtr[j][ArrayElements.column - 1 - j];
				ArrayElements.arrayPtr[j][ArrayElements.column - 1 - j] = ArrayElements.arrayPtr[i][ArrayElements.column - 1 - i];
				ArrayElements.arrayPtr[i][ArrayElements.column - 1 - i] = tmp;
			}
		}
	}

	return ArrayElements;
}

