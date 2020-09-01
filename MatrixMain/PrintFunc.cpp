#include "Header.h"

int print(struct Array1D ArrayElements)
{
    Logotype();

    cout << (char)9 << (char)9;
    
    for (int i = 0; i < ArrayElements.column; i++)
    {
        cout << setw(3) << "[" << setw(2) << i << "]";
    }
    printf("\n");
    printf("\n");
    
    for (int i = 0; i < ArrayElements.rows; i++)
    {
        cout << (char)9;
        cout << "row[" << setw(2) << i << "]";

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

    cout << (char)9 << (char)9;

    for (int i = 0; i < ArrayElements.column; i++)
    {
        cout << setw(3) << "[" << setw(2) << i << "]";
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        cout << (char)9;
        cout << "row[" << setw(3) << i << "]";

        for (int j = 0; j < ArrayElements.column; j++)
        {
            cout << setw(6) << ArrayElements.arrayPtr[i][j];
        }
        printf("\n");
    }
    return 0;
}