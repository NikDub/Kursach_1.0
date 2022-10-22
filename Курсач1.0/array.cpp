#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "array.h"

using namespace std;

List *Array_save(List *list)
{
	List *temp = Head;

	List *array = new List[n];

	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Список пуст!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return array;
	}

	for (int i = 0; i < n; i++)
	{
		array[i] = *temp;
		temp = temp->Next;
	}
	n1 = n;
	return array;
}

void putDequeRight(List *list, audi *array)
{
	List *value = new List;
	value->Rec = *array;
	n++;
	if (Head == NULL)
	{
		Head = Last = value;
		value->Next = NULL;
		value->Prev = NULL;
	}
	else
	{
		Last->Next = value;
		value->Prev = Last;
		Last = value;
		value->Next = NULL;
	}
}

List *Array_Load(List *list, List array[])
{
	List *temp = Head;
	if (n1 == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Массив пуст!!!          |" << endl;
		cout << "|===================================|" << endl;

		return temp;
	}
	for (int i = 0; i < n1; i++)
	{
		putDequeRight(list, &array[i].Rec);
	}

	n = n1;
	delete array;
	return temp;
}