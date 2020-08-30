#include "Header.h"


struct Array1D createArray(struct Array1D ArrayElements)
{
    ArrayElements.arrayPtr = (int*)malloc(sizeof(int) * ArrayElements.rows * ArrayElements.column);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    return ArrayElements;
}

struct Array1D fillArray(struct Array1D ArrayElements)
{
    Logotype();

    cout << "Enter numbers to the matrix: \n";

    fflush(stdout);

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        for (int j = 0; j < ArrayElements.column; j++)

        {
            cout << "Element [" << i << "][" << j << "] = ";
            cin >> ArrayElements.arrayPtr[i * ArrayElements.column + j];
            
        }
    }
    return ArrayElements;
}

int freeMemory(struct Array1D ArrayElements)
{
    free(ArrayElements.arrayPtr);

    return 0;
}