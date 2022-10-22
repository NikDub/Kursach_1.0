#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "Delete.h"

using namespace std;

void Del_yz(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Список пуст!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	List *tmp = Head;
	int b = n + 1;
	while (b > n || b<1)
	{
		cout << "|===================================|" << endl;
		cout << "| Введите номер удаляемой сруктуры: ";
		cin >> b;
		cout << "|===================================|" << endl;
	}
	if (b > 1)
	{
		for (int i = 0; i < b - 1; i++)
		{
			tmp = tmp->Next;
		}
	}
	if (b == 1)
	{
		if (n == 1)
		{
			Head = NULL;
			Last = NULL;
			tmp->Next = NULL;
			tmp->Prev = NULL;
			delete tmp;
			n--;
			cout << "|===================================|" << endl;
			cout << "|        Удаление произведено       |" << endl;
			cout << "|===================================|" << endl;
			return;
		}
		Head = tmp->Next;
		Head->Prev = NULL;
		delete tmp;
		n--;
		cout << "|===================================|" << endl;
		cout << "|        Удаление произведено       |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	if (b == n)
	{
		Last = tmp->Prev;
		Last->Next = NULL;
		delete tmp;
		n--;
		cout << "|===================================|" << endl;
		cout << "|        Удаление произведено       |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	else
	{
		List *a = tmp;
		tmp->Prev->Next = tmp->Next;
		tmp->Next->Prev = tmp->Prev;
		delete tmp;
		n--;
		cout << "|===================================|" << endl;
		cout << "|        Удаление произведено       |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
}

void Del_List(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Список пуст!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	while (n > 0)
	{
		List *tmp = Head;
		if (n == 1)
		{
			Head = NULL;
			Last = NULL;
			tmp->Next = NULL;
			tmp->Prev = NULL;
			delete tmp;
			n--;
			cout << "|=============================|" << endl;
			cout << "|        Cписок очищен!       |" << endl;
			cout << "|=============================|" << endl;
			return;
		}
		Head = tmp->Next;
		Head->Prev = NULL;
		delete tmp;
		n--;
	}
}
