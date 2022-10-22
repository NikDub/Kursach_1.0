#pragma once

#include "struct.h"
#include "array.h"

void file_save(List *list);						//Функция сохранения в файл
void file_load(List *list);						//Функция загрузки из файла
void file_remove();								//Функция удаления файла