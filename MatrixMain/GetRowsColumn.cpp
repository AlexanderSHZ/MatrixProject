#include "Header.h"

struct Array1D GetRowsColumn(struct Array1D ArrayElements)
{
    Logotype();
    cout << (char)9;
    cout << (char)186 << " Enter the number of rows  " << setw(18) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)186 << " Enter the number of columns  " << setw(15) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)200;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)188 << "\n" << "\n";
    cout << (char)9;
    cout << " Rows = ";
    ArrayElements.rows = get_variant(100);
    cout << " Columns = ";
    ArrayElements.column = get_variant(100);

    return ArrayElements;
}

struct Array2D GetRowsColumn(struct Array2D ArrayElements)
{
    Logotype();
    cout << (char)9;
    cout << (char)186 << " Enter the number of rows  " << setw(18) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)186 << " Enter the number of columns  " << setw(15) << (char)186 << "\n";
    cout << (char)9;
    cout << (char)200;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)188 << "\n" << "\n";
    cout << (char)9;
    cout << " Rows = ";
    ArrayElements.rows = get_variant(100);
    cout << " Columns = ";
    ArrayElements.column = get_variant(100);

    return ArrayElements;
}