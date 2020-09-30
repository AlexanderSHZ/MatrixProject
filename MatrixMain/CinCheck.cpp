#include "Header.h"

int get_variant(int count) 
{
    int variant;
    char s[100]; // ������ ��� ���������� �������� ������
    scanf("%s", s); // ��������� ������

    // ���� ���� �����������, �������� �� ���� � ������ ��������� ���
    while (sscanf(s, "%d", &variant) != 1 || variant < 0 || variant > count) {
        printf("Incorrect input. Try again: "); // ������� ��������� �� ������
        scanf("%s", s); // ��������� ������ ��������
    }

    if(variant == 0)
    {
        _Exit(EXIT_SUCCESS);
    }

    return variant;
}