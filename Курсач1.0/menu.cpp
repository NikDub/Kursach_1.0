#include "stdafx.h"
#include <iostream>
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "menu.h"

using namespace std;

void menu(List *list, List *&array)
{
	cout << "|               ����               |" << endl;
	cout << "|==================================|" << endl;
	cout << "|1. ����.                          |" << endl;
	cout << "|2. ���������� ������ �� �����.    |" << endl;
	cout << "|==================================|" << endl;
	cout << "|3. �����.                         |" << endl;
	cout << "|4. ����� � �������.               |" << endl;
	cout << "|==================================|" << endl;
	cout << "|5. �������� ������.               |" << endl;
	cout << "|6. �������� ����� ������.         |" << endl;
	cout << "|==================================|" << endl;
	cout << "|7. ���������� ������.             |" << endl;
	cout << "|8. ����� �� ������.               |" << endl;
	cout << "|9. ������ ������� �������.        |" << endl;
	cout << "|10. �������������� ������.        |" << endl;
	cout << "|==================================|" << endl;
	cout << "|11. ������ � ����.                |" << endl;
	cout << "|12. ���������� �� �����.          |" << endl;
	cout << "|13. �������� ������.              |" << endl;
	cout << "|==================================|" << endl;
	cout << "|14. ����� � ������.               |" << endl;
	cout << "|15. �������� �� �������.          |" << endl;
	cout << "|==================================|" << endl;
	cout << "|20. �����                         |" << endl;
	cout << "|==================================|" << endl;
	cout << "       ������� ��� �����: ";
	char select[20];
	gets_s(select);
	int select_1 = atoi(select);
	if (select_1 == 0)
	{
		select_1--;
	}

	switch (select_1)
	{
	case 20: system("cls");  exit(0);
	case 1: system("cls");  Record_to(list); system("pause"); break;
	case 2: system("cls");	add_after(list); system("pause"); break;
	case 3:	system("cls");  Print_List(list); system("pause"); break;
	case 4: system("cls");	Print_Table(list); system("pause"); break;
	case 5:	system("cls");  Del_yz(list); system("pause"); break;
	case 6: system("cls");	Del_List(list); system("pause"); break;
	case 7: system("cls");	SortShella(list); system("pause"); break;
	case 8: system("cls");	Search(array); system("pause"); break;
	case 9: system("cls");	Swap_elm(list); system("pause"); break;
	case 10: system("cls"); edit(list); system("pause"); break;
	case 11: system("cls"); file_save(list); system("pause"); break;
	case 12: system("cls"); file_load(list); system("pause"); break;
	case 13: system("cls"); file_remove(); system("pause"); break;
	case 14: system("cls");	array = Array_save(list); system("pause"); break;
	case 15: system("cls");	Array_Load(list, array);	system("pause"); break;
	default:  break;
	}
}