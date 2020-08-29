#include "Header.h"


struct Array1D createArray1D(struct Array1D ArrayElements)
{
    ArrayElements.arrayPtr = (int*)malloc(sizeof(int) * ArrayElements.rows * ArrayElements.column);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    return ArrayElements;
}

struct Array1D fillArray1D(struct Array1D ArrayElements)
{
    fflush(stdout);

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        for (int j = 0; j < ArrayElements.column; j++)

        {
            //ArrayElements.arrayPtr[i * ArrayElements.column + j] = i * j;
            cin >> ArrayElements.arrayPtr[i * ArrayElements.column + j];
        }
    }
    return ArrayElements;
}

int freeMemory1D(struct Array1D ArrayElements)
{
    free(ArrayElements.arrayPtr);

    return 0;
}