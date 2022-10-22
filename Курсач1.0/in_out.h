#pragma once

#include "struct.h"
#include "array.h"

List* createList();								//функция инициализирования списка
void Record_to(List *value);					//функция ввода нового узла
void add_after(List *list);						//Функция добавление узла на место X
void Print_List(List *list);					//Функция вывода списка на экран
void Print_Table(List *list);					//Функция вывода списка в виде таблицы
void edit(List *list);							//Функция редактирования записей
