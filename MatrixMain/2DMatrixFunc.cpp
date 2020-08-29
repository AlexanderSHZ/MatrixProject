#include "Header.h"

struct Array2D createArray2D(struct Array2D ArrayElements)
{

    ArrayElements.arrayPtr = (int**)malloc(sizeof(int*) * ArrayElements.rows);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    for (int j = 0; j < ArrayElements.rows; j++)
    {
        ArrayElements.arrayPtr[j] = (int*)malloc(sizeof(int) * ArrayElements.column);
    }

    return ArrayElements;
}

struct Array2D fillArray2D(struct Array2D ArrayElements)
{
    fflush(stdout);

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        for (int j = 0; j < ArrayElements.column; j++)

        {
            //ArrayElements.arrayPtr[i][j] = i * j;
            cin >> ArrayElements.arrayPtr[i][j];
        }
    }
    return ArrayElements;
}

int freeMemory2D(struct Array2D ArrayElements)
{
    for (int i = 0; i < ArrayElements.rows; i++)
    {
        free(ArrayElements.arrayPtr[i]);
    }

    free(ArrayElements.arrayPtr);

    return 0;
}