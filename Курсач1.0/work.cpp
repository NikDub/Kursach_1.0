#include "stdafx.h"
#include <iostream>
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "work.h"

using namespace std;

void SortShella(List  *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           ������ ����!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	int select;
	char select_1[2000];
	cout << "|===================================|" << endl;
	cout << "|             ����������:           |" << endl;
	cout << "|===================================|" << endl;
	cout << "|       1. �� �����������(�-�).     |" << endl;
	cout << "|       2. �� ��������(�-�).        |" << endl;
	cout << "|       10. �����.                  |" << endl;
	cout << "|===================================|" << endl;
	cout << "| ������� ��� �����: " << endl;
	fflush(stdin);
	cin>>select_1;
	cout << "|===================================|" << endl;
	select = atoi(select_1);
	if (select == 0) select--;
	if (select == 10)
		return;
	while (select<1 || select>2)
	{
		cout << "| �������� ����! ��������� ��� ���� ��� ���!" << endl;
		cout << "| ������� ��� �����: " << endl;
		fflush(stdin);
		cin >> select_1;
		select = atoi(select_1);
		if (select == 0) select--;
		if (select == 10)
			return;
	}
	List temp;
	List *array = new List;
	int i, j, incr = n / 2;
	array = Array_save(list);

	switch (select)
	{
	case 1:
		cout << "|===================================|" << endl;
		cout << "|   ���������� �� �����������(�-�): |" << endl;
		cout << "|===================================|" << endl;
		cout << "| 1. �� ������." << endl;
		cout << "| 2. �� ����." << endl;
		cout << "| 3. �� ���� ���������." << endl;
		cout << "| 4. �� ������� �����." << endl;
		cout << "| 5. �� ������ ������������." << endl;
		cout << "| 6. �� ���������� ��������� ���." << endl;
		cout << "| 7. �� ���������� ������� ������������." << endl;
		cout << "| 10. �����." << endl;
		cout << "|===================================|" << endl;
		cout << "| ������� ��� �����: " << endl;
		fflush(stdin);
		cin >> select_1;
		cout << "|===================================|" << endl;

		select = atoi(select_1);
		if (select == 0) select--;
		if (select == 10)
			return;
		while (select<1 || select>7)
		{
			cout << "| �������� ����! ��������� ��� ���� ��� ���!" << endl;
			cout << "| ������� ��� �����: " << endl;
			fflush(stdin);
			cin >> select_1;
			select = atoi(select_1);
			if (select == 0) select--;
			cout << "|===================================|" << endl;
			if (select == 10)
				return;
		}
		switch (select)
		{
		case 1:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (strcmp(array[j].Rec.model, array[j + incr].Rec.model)>0)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 2:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.year>array[j + incr].Rec.year)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 3:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (strcmp(array[j].Rec.type, array[j + incr].Rec.type)>0)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 4:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.wheel>array[j + incr].Rec.wheel)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 5:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.secure>array[j + incr].Rec.secure)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 6:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.HP>array[j + incr].Rec.HP)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 7:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.airbag>array[j + incr].Rec.airbag)//�����������
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;

		default:
			cout << "| �������� ����!" << endl;
			break;
		}
		break;
	case 2:
		cout << "|===================================|" << endl;
		cout << "|    ���������� �� ��������(�-�):   |" << endl;
		cout << "|===================================|" << endl;
		cout << "| 1. �� ������." << endl;
		cout << "| 2. �� ����." << endl;
		cout << "| 3. �� ���� ���������." << endl;
		cout << "| 4. �� ������� �����." << endl;
		cout << "| 5. �� ������ ������������." << endl;
		cout << "| 6. �� ���������� ��������� ���." << endl;
		cout << "| 7. �� ���������� ������� ������������." << endl;
		cout << "| 10. �����." << endl;
		cout << "|===================================|" << endl;
		cout << "| ������� ��� �����: " << endl;
		fflush(stdin);
		cin >> select_1;
		cout << "|===================================|" << endl;

		select = atoi(select_1);
		if (select == 0) select--;
		if (select == 10)
			return;
		while (select<1 || select>7)
		{
			cout << "| �������� ����! ��������� ��� ���� ��� ���!" << endl;
			cout << "| ������� ��� �����: " << endl;
			fflush(stdin);
			cin >> select_1;
			select = atoi(select_1);
			if (select == 0) select--;
			cout << "|===================================|" << endl;
			if (select == 10)
				return;
		}
		switch (select)
		{
		case 1:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (strcmp(array[j].Rec.model, array[j + incr].Rec.model)<0)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 2:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.year<array[j + incr].Rec.year)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 3:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (strcmp(array[j].Rec.type, array[j + incr].Rec.type)<0)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 4:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.wheel<array[j + incr].Rec.wheel)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 5:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.secure<array[j + incr].Rec.secure)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 6:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.HP<array[j + incr].Rec.HP)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;
		case 7:
			while (incr>0)
			{
				for (i = incr; i<n; i++)
				{
					j = i - incr;
					while (j >= 0)
					if (array[j].Rec.airbag<array[j + incr].Rec.airbag)
					{
						temp = array[j];
						array[j] = array[j + incr];
						array[j + incr] = temp;
						j = j - incr;
					}
					else j = -1;
				}
				incr = incr / 2;
			}
			break;

		default:
			cout << "| �������� ����!" << endl;
			break;
		}
		break;
	default:
		cout << "| �������� ����!" << endl;
		break;
	}
	Del_List(list);
	Array_Load(list, array);
	cout << "|===================================|" << endl;
	cout << "|       ���������� �����������!     |" << endl;
	cout << "|===================================|" << endl;
}

void Search(List  *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           ������ ����!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	List *array = new List;
	array = Array_save(list);
	char value[20];
	int value_int, flag = 0;
	cout << "|============================================|" << endl;
	cout << "|                 �����:                     |" << endl;
	cout << "|============================================|" << endl;

	cout << "| 1. �� ������.                              |" << endl;
	cout << "| 2. �� ����.                                |" << endl;
	cout << "| 3. �� ���� ���������.                      |" << endl;
	cout << "| 4. �� ������                               |" << endl;
	cout << "| 5. �� ������� �����.                       |" << endl;
	cout << "| 6. �� ���������� ��������� ���.            |" << endl;
	cout << "| 7. �� ���������� ������� ������������.     |" << endl;
	cout << "|============================================|" << endl;
	cout << "| 10. �����.                                 |" << endl;
	cout << "|============================================|" << endl;
	cout << "|         ������� ��� �����: ";
	char select[20];
	fflush(stdin);
	cin>>select;
	cout << "|============================================|" << endl;

	int select_1 = atoi(select);
	if (select_1 == 0) select_1--;
	if (select_1 == 10)
		return;
	while (select_1<1 || select_1>7)
	{
		fflush(stdin);
		cout << "|============================================|" << endl;
		cout << "| �������� ����! ��������� ��� ���� ��� ���! |" << endl;
		cout << "|============================================|" << endl;
		cout << "|         ������� ��� �����: ";
		char select[20];
		cin >> select;
		cout << "|============================================|" << endl;
		int select_1 = atoi(select);
		if (select_1 == 0) select_1--;
		if (select_1 == 10)
			return;
	}
	switch (select_1)
	{
	case 1:
		cout << "|============================================|" << endl;
		cout << "| ����� ������ ����� ������? " << endl;
		fflush(stdin);
		cin >> value;
		cout << "|============================================|" << endl;

		for (int i = 0; i < n1; i++)
		{
			if (!strcmp(array[i].Rec.model, value))
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		cout << "|============================================|" << endl;

		break;
	case 2:
		cout << "|============================================|" << endl;
		cout << "| ����� ��� ����� ������? " << endl;
		fflush(stdin);
		gets_s(value);
		value_int = atoi(value);
		cout << "|============================================|" << endl;
		for (int i = 0; i < n1; i++)
		{
			if (array[i].Rec.year == value_int)
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		break;
	case 3:
		cout << "|============================================|" << endl;
		cout << "| ����� ��� ��������� ����� ������?" << endl;
		fflush(stdin);
		cin >> value;
		cout << "|============================================|" << endl;
		for (int i = 0; i < n1; i++)
		{
			if (!strcmp(array[i].Rec.type, value))
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		break;
	case 4:
		cout << "|============================================|" << endl;
		cout << "| ����� ����� ����� ������?" << endl;
		fflush(stdin);
		cin >> value;
		cout << "|============================================|" << endl;
		for (int i = 0; i < n1; i++)
		{
			if (!strcmp(array[i].Rec.body, value))
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		break;
	case 5:
		cout << "|============================================|" << endl;
		cout << "| ����� ������ ����� ����� ������?" << endl;
		fflush(stdin);
		gets_s(value);
		value_int = atoi(value);
		for (int i = 0; i < n1; i++)
		{
			if (array[i].Rec.wheel == value_int)
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		break;
	case 6:
		cout << "|============================================|" << endl;
		cout << "| ����� ���������� ��������� ��� ����� ������?" << endl;
		fflush(stdin);
		gets_s(value);
		value_int = atoi(value);
		cout << "|============================================|" << endl;
		for (int i = 0; i < n1; i++)
		{
			if (array[i].Rec.HP == value_int)
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		break;
	case 7:
		cout << "|============================================|" << endl;
		cout << "| ����� ����������� ������� ������������ ����� ������?" << endl;
		fflush(stdin);
		gets_s(value);
		value_int = atoi(value);
		cout << "|============================================|" << endl;
		for (int i = 0; i < n1; i++)
		{
			if (array[i].Rec.airbag == value_int)
			{
				cout << "|    ������� � ������� -> " << i + 1 << endl;
				flag = 1;
			}
		}
		break;
	default:
		cout << "�������� ����!" << endl;

		break;
	}
	if (flag == 0)
	{
		cout << "|============================================|" << endl;
		cout << "|     � ��������� ������ �� ������� �����!   |" << endl;
		cout << "|============================================|" << endl;
	}
	delete array;
}

void Swap_elm(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           ������ ����!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	List *array = new List;
	List array_1;
	array = Array_save(list);
	int m, l;
	char buff[100];
	cout << "|===================================|" << endl;
	cout << "| �������� ������ ������(1 - " << n  << "): |" << endl;
	cout << "| ������� ����� ������ �1: ";
	fflush(stdin);
	cin >> buff;
	m = atoi(buff);
	cout << "| ������� ����� ������ �2: ";
	fflush(stdin);
	cin >> buff;
	l = atoi(buff);
	while (l<1 || l>n || m<1 || m>n )
	{
		cout << "| ���� ��� �������� ��������!" << endl
			<< "| ��������� ����" << endl;
		cout << "| ������� ����� ������ �1: ";
		fflush(stdin);
		cin >> buff;
		m = atoi(buff);
		cout << "| ������� ����� ������ �2: ";
		fflush(stdin);
		cin >> buff;
		l = atoi(buff);
	}
	l--;
	m--;

	array_1 = array[l];
	array[l] = array[m];
	array[m] = array_1;
	Del_List(list);
	Array_Load(list, array);
	cout << "|===================================|" << endl;
	cout << "|     ������ ����������� �������.   |" << endl;
	cout << "|===================================|" << endl;
}