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
	cout << "|               Меню               |" << endl;
	cout << "|==================================|" << endl;
	cout << "|1. Ввод.                          |" << endl;
	cout << "|2. Добавление записи на место.    |" << endl;
	cout << "|==================================|" << endl;
	cout << "|3. Вывод.                         |" << endl;
	cout << "|4. Вывод в таблице.               |" << endl;
	cout << "|==================================|" << endl;
	cout << "|5. Удаление записи.               |" << endl;
	cout << "|6. Удаление всего списка.         |" << endl;
	cout << "|==================================|" << endl;
	cout << "|7. Сортировка списка.             |" << endl;
	cout << "|8. Поиск по списку.               |" << endl;
	cout << "|9. Замена местами записей.        |" << endl;
	cout << "|10. Редактирование записи.        |" << endl;
	cout << "|==================================|" << endl;
	cout << "|11. Запись в файл.                |" << endl;
	cout << "|12. Считывание из файла.          |" << endl;
	cout << "|13. Удаление файлов.              |" << endl;
	cout << "|==================================|" << endl;
	cout << "|14. Вывод в массив.               |" << endl;
	cout << "|15. Выгрузка из массива.          |" << endl;
	cout << "|==================================|" << endl;
	cout << "|20. Выход                         |" << endl;
	cout << "|==================================|" << endl;
	cout << "       Введите ваш выбор: ";
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