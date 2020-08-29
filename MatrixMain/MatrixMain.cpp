#include "Header.h"

int main()
{
    Array1D ArrayElements1D;
    Array2D ArrayElements2D;

    int matrixDimension;

    cout << "Hello, do you want to create 1 or 2 dimentional matrix? \n";
    cin >> matrixDimension;
    if (matrixDimension == 1)
    {
        cout << "Enter the number of rows \n";
        cin >> ArrayElements1D.rows;
        cout << "Enter the number of columns \n";
        cin >> ArrayElements1D.column;
        createArray1D(ArrayElements1D);
    }
    else if (matrixDimension == 2)
    {
        cout << "Enter the number of rows \n";
        cin >> ArrayElements2D.rows;
        cout << "Enter the number of columns \n";
        cin >> ArrayElements2D.column;
        createArray2D(ArrayElements2D);
    }
    else
    {
        cout << "Incorrect nuber of dimentions \n";
    }

    cout << "Enter numbers to the matrix \n";
    if (matrixDimension == 1)
    {
        fillArray1D(ArrayElements1D);
    }
    else
    {
        fillArray2D(ArrayElements2D);
    }

    if (matrixDimension == 1)
    {
        print1D(ArrayElements1D);
    }
    else
    {
        print2D(ArrayElements2D);
    }

    if (matrixDimension == 1)
    {
        freeMemory1D(ArrayElements1D);
    }
    else
    {
        freeMemory2D(ArrayElements2D);
    }

    return 0;
}