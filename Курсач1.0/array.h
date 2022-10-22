#pragma once

#include "struct.h"

List *Array_save(List *list);					//Функция ввода в массив
void putDequeRight(List *list, audi *array);	//Функция выгрузка данных в структуру из массива
List *Array_Load(List *list, List array[]);		//Функция вывода из массива