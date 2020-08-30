#include "Header.h"

int print(struct Array1D ArrayElements)
{
    Logotype();

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        cout << "row[" << setw(3) << i << "]";

        for (int j = 0; j < ArrayElements.column; j++)
        {
            cout << setw(6) << ArrayElements.arrayPtr[i * ArrayElements.column + j];
        }
        printf("\n");
    }
    return 0;
}

int print(struct Array2D ArrayElements)
{
    Logotype();

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        cout << "row[" << setw(3) << i << "]";

        for (int j = 0; j < ArrayElements.column; j++)
        {
            cout << setw(6) << ArrayElements.arrayPtr[i][j];
        }
        printf("\n");
    }
    return 0;
}