#pragma once

#include "struct.h"
#include "array.h"

List* createList();								//������� ����������������� ������
void Record_to(List *value);					//������� ����� ������ ����
void add_after(List *list);						//������� ���������� ���� �� ����� X
void Print_List(List *list);					//������� ������ ������ �� �����
void Print_Table(List *list);					//������� ������ ������ � ���� �������
void edit(List *list);							//������� �������������� �������
