#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "menu.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "");
	List *list = createList();
	List *array = new List;
	while (1)
	{
		system("cls");
		menu(list, array);
	}
}