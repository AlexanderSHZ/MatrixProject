#include "Header.h"

void Logotype()
{
    system("cls");

    cout << "\n";
    cout << (char)201/*������� ����� ������� ���� */;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)187/*������� ������ ������� ���� */ << "\n";
    cout << (char)186 << setw(21) << "Matrix" << setw(20) << (char)186 << "\n";
    cout << (char)200/*������ ����� ������� ���� */;
    for (size_t i = 0; i < 40; i++)
    {
        cout << (char)205;
    }
    cout << (char)188/*������ ������ ������� ���� */ << "\n";
}