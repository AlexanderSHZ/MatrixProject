#include "Header.h"

struct Array1D GetRowsColumn(struct Array1D ArrayElements)
{
    cout << "Enter the number of rows: ";
    ArrayElements.rows = get_variant(100);
    cout << "Enter the number of columns: ";
    ArrayElements.column = get_variant(100);

    return ArrayElements;
}

struct Array2D GetRowsColumn(struct Array2D ArrayElements)
{
    cout << "Enter the number of rows: ";
    ArrayElements.rows = get_variant(100);
    cout << "Enter the number of columns: ";
    ArrayElements.column = get_variant(100);

    return ArrayElements;
}