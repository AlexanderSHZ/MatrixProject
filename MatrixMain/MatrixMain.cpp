#include "Header.h"

int main()
{
    int matrixDimension = 0;
    int diagType = 0;

    Array1D ArrayElements1D;
    Array2D ArrayElements2D;

    matrixDimension = MatrixType();

    int i; 

    if (matrixDimension == 1)
    {
        ArrayElements1D = GetRowsColumn(ArrayElements1D);
        ArrayElements1D = createArray(ArrayElements1D);
        ArrayElements1D = fillArray(ArrayElements1D);
        print(ArrayElements1D);
        //diagType = SortArray();
        cout << "What diagonal do you whant to sort?" << "\n";
        cout << " 1 - main diagonal; " << "\n";
        cout << " 2 - side diagonal; " << "\n";
        cin >> diagType;
        if (diagType == 1)
        {
            ArrayElements1D = sortArrayMainDiag(ArrayElements1D);
        }
        else
        {
            ArrayElements1D = sortArraySideDiag(ArrayElements1D);
        }
        
        print(ArrayElements1D);
    }
    else 
    {
        ArrayElements2D = GetRowsColumn(ArrayElements2D);
        ArrayElements2D = createArray(ArrayElements2D);
        ArrayElements2D = fillArray(ArrayElements2D);
        print(ArrayElements2D);
        //diagType = SortArray();
        cout << "\n What diagonal do you whant to sort?" << "\n";
        cout << " 1 - main diagonal; " << "\n";
        cout << " 2 - side diagonal; " << "\n";
        cin >> diagType;
        if (diagType == 1)
        {
            ArrayElements2D = sortArrayMainDiag(ArrayElements2D);
        }
        else
        {
            ArrayElements2D = sortArraySideDiag(ArrayElements2D);
        }
        
        print(ArrayElements2D);
    }
   
    
    cin >> i;

        freeMemory(ArrayElements1D);
        freeMemory(ArrayElements2D);
   
    return 0;
}