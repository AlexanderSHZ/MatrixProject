#include "Header.h"

struct Array2D createArray(struct Array2D ArrayElements)
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

struct Array2D fillArray(struct Array2D ArrayElements)
{
    Logotype();

    cout << (char)9;
    cout << (char)186 << "Enter numbers to the matrix:" << setw(13) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)200;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)188 << "\n";
    cout << "\n";

    fflush(stdout);

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        for (int j = 0; j < ArrayElements.column; j++)

        {
            //cout << (char)9;
            //cout << "Element [" << i << "][" << j << "] = ";
            //cin >> ArrayElements.arrayPtr[i][j];
            ArrayElements.arrayPtr[i][j] = (i + 2) * (j + 1);
        }
    }
    return ArrayElements;
}

int freeMemory(struct Array2D ArrayElements)
{
    for (int i = 0; i < ArrayElements.rows; i++)
    {
        free(ArrayElements.arrayPtr[i]);
    }

    free(ArrayElements.arrayPtr);

    return 0;
}