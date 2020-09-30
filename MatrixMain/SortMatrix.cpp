#include "Header.h"

void sortArrayDiagType()
{
	Logotype();

	cout << (char)9;//TAB
	cout << (char)186 << " What diagonal do you whant to sort?" << setw(5) << (char)186 << "\n";
	cout << (char)9;
	cout << (char)186 << " 1 - main diagonal; " << setw(21) << (char)186 << "\n";
	cout << (char)9;
	cout << (char)186 << " 2 - side diagonal; " << setw(21) << (char)186 << "\n";
	cout << (char)9;
	cout << (char)186 << " 0 - exit " << setw(31) << (char)186 << "\n";
	cout << (char)9;
	cout << (char)200;
	for (size_t i = 0; i < 40; i++)
	{
		cout << (char)205;
	}
	cout << (char)188 << "\n";
	cout << "\n";

}

void diagTypeVariant()
{
	cout << "\n";
	cout << (char)9;
	cout << "Variant = ";
}



struct Array1D sortArrayMainDiag(struct Array1D ArrayElements)
{
	int tmp = 0;

	for (int i = 0; i < ArrayElements.rows - 1; i++)
	{
		for (int j = 0; j < ArrayElements.column - 1; j++)
		{
			if (ArrayElements.arrayPtr[j * ArrayElements.column + j] < ArrayElements.arrayPtr[(j + 1) * ArrayElements.column + j + 1])
			{
				tmp = ArrayElements.arrayPtr[j * ArrayElements.column + j];
				ArrayElements.arrayPtr[j * ArrayElements.column + j] = ArrayElements.arrayPtr[(j + 1) * ArrayElements.column + j + 1];
				ArrayElements.arrayPtr[(j + 1) * ArrayElements.column + j + 1] = tmp;
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
	int tmp = 0;

	for (int i = 0; i < (ArrayElements.rows - 1); i++)
	{
		for (int j = i + 1; j < ArrayElements.column; j++)
		{
			if (ArrayElements.arrayPtr[j * ArrayElements.column + ArrayElements.column - 1 - j] < ArrayElements.arrayPtr[i * ArrayElements.column + ArrayElements.column - 1 - i])
			{
				tmp = ArrayElements.arrayPtr[j * ArrayElements.column + ArrayElements.column - 1 - j];
				ArrayElements.arrayPtr[j * ArrayElements.column + ArrayElements.column - 1 - j] = ArrayElements.arrayPtr[i * ArrayElements.column + ArrayElements.column - 1 - i];
				ArrayElements.arrayPtr[i * ArrayElements.column + ArrayElements.column - 1 - i] = tmp;
			}
		}
	}

	return ArrayElements;
}

struct Array2D sortArraySideDiag(struct Array2D ArrayElements)
{
	int tmp = 0;

	for (int i = 0; i < (ArrayElements.rows - 1); i++)
	{
		for (int j = i + 1; j < ArrayElements.column; j++)
		{
			if (ArrayElements.arrayPtr[j][ArrayElements.column - 1 - j] < ArrayElements.arrayPtr[i][ArrayElements.column - 1 - i])
			{
				tmp = ArrayElements.arrayPtr[j][ArrayElements.column - 1 - j];
				ArrayElements.arrayPtr[j][ArrayElements.column - 1 - j] = ArrayElements.arrayPtr[i][ArrayElements.column - 1 - i];
				ArrayElements.arrayPtr[i][ArrayElements.column - 1 - i] = tmp;
			}
		}
	}

	return ArrayElements;
}

