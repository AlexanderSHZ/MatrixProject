#include "Header.h"

int MatrixType()
{
    int matrixDimension = 0;

    Logotype();
    cout << (char)9;//TAB
    cout << (char)186 << "What kind of matrix do you whant:" << setw(8) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)186 << " 1 - one dimentional matrix; " << setw(12) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)186 << " 2 - two dimentional matrix; " << setw(12) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)186 << " 0 - exit " << setw(31) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)200;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)188 << "\n";
    cout << "\n";
    cout << (char)9;
    cout << " Matrix dimension = ";

    matrixDimension = get_variant(3);

    return matrixDimension;
}