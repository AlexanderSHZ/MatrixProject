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
            cout << (char)9;
            cout << "Element [" << i << "][" << j << "] = ";
            cin >> ArrayElements.arrayPtr[i * ArrayElements.column + j];
            //ArrayElements.arrayPtr[i * ArrayElements.column + j] = (5 + i) * (j + 7);
        }
    }
    return ArrayElements;
}

int freeMemory(struct Array1D ArrayElements)
{
    free(ArrayElements.arrayPtr);

    return 0;
}