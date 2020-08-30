#include "Header.h"

int MatrixType()
{
    int matrixDimension = 0;

    Logotype();
    
    cout << (char)186 << "What kind of matrix do you whant:" << setw(8) << (char)186 << "\n";
    cout << (char)186 << " 1 - one dimentional matrix; " << setw(12) << (char)186 << "\n";
    cout << (char)186 << " 2 - two dimentional matrix; " << setw(12) << (char)186 << "\n";
    cout << (char)200/*Нижний левый двойной угол */;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)188/*Нижний правый двойной угол */ << "\n";

    matrixDimension = get_variant(2);

    return matrixDimension;
}