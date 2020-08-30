#include "Header.h"

int main()
{
    int matrixDimension = 0;

    Array1D ArrayElements1D;
    Array2D ArrayElements2D;

    matrixDimension = MatrixType();

    if (matrixDimension == 1)
    {
        ArrayElements1D = GetRowsColumn(ArrayElements1D);
        ArrayElements1D = createArray(ArrayElements1D);
        ArrayElements1D = fillArray(ArrayElements1D);
        print(ArrayElements1D);
    }
    else 
    {
        ArrayElements2D = GetRowsColumn(ArrayElements2D);
        ArrayElements2D = createArray(ArrayElements2D);
        ArrayElements2D = fillArray(ArrayElements2D);
        print(ArrayElements2D);
    }
   
        freeMemory(ArrayElements1D);
        freeMemory(ArrayElements2D);
   
    return 0;
}